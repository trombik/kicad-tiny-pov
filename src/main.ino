#include <string.h>
#include <stdint.h>
#include <avr/pgmspace.h>

/* use TinyI2C instead of arduino Wire library. the library requires a small
 * memory footprint, which is critical on small MCUs. the library supports all
 * AVR MCUs. see:
 *
 * https://github.com/technoblogy/tiny-i2c
 */
#include <TinyI2CMaster.h>

/* include the font data. the data is kept in a separate file for readability
 */
#include "gohufont-14.h"

/* the I2C address of MCP23017. A0, A1, and A2 pins of MCP23017 must be
 * grounded.
 */
#define I2C_ADDR    0x20

/* register addresses. see 3.4 GPIO Port in the datasheet */
#define REG_IODIRA  0x00
#define REG_IODIRB  0x01
#define REG_GPIOA   0x12
#define REG_GPIOB   0x13

/* the second argument of TinyI2C.start(). use these instead of cryptic raw
 * numbers.
 */
#define TINYI2C_WRITE   0
#define TINYI2C_READ    1

/* the fonts array starts from this number to 126 in ascii table */
#define FIRST_PRINTABLE_CHAR_NUM    (32)

/* how fast the LEDs should show patterns. */
#define DELAY_PER_CHAR_MS   (5)

/* an LED that indicates an error */
static const int led_pin = 3;

/* the text to show */
static const char text[] = "HAPPY BIRTHDAY!";

/* the core function to show the text */
void blink()
{
    static const size_t text_len = strlen(text);

    /* process each character in the `text`. `i` is declared as size_t,
     * instead of the usual `int` because strlen() returns size_t.
     * */
    for (size_t i = 0; i < text_len; i++) {

        /* an item in the `fonts` array holds an array of bit patterns */
        for (int j = 0; j < 8; j++) {
            uint8_t high, low;
            uint16_t bits;

            /* items in `text` array are char, or ASCII value. map the ASCII
             * value to the index of fonts. the index starts from 0, and the
             * first character is ` `, a space, whose ASCII value is
             * FIRST_PRINTABLE_CHAR_NUM.
             */
            int index = text[i] - FIRST_PRINTABLE_CHAR_NUM;

            /* the `fonts` variable is stored in the program space, i.e. not
             * in SRAM, but in flash ROM. on small MCUs like ATTiny85,
             * SRAM is just 512 bytes, which is not enough for the font data.
             * PROGMEM attribute, which is an extension of avr-libc, makes
             * variables kept in program space. see:
             *
             * https://www.nongnu.org/avr-libc/user-manual/group__avr__pgmspace.html#ga75acaba9e781937468d0911423bc0c35
             *
             * to read data in the program space, use `pgm_read_*` macro.
             * bitmap is uin16_t, and a word on AVR is 16 bits, so the macro
             * to use is `pgm_read_word`.
             */
            bits = pgm_read_word(&(fonts[index][j]));

            /* split the `bits`, which is uint16_t, into uint8_t because
             * TinyI2C.write() accepts uint8_t only.
             */
            high = bits >> 8;
            low  = bits & 0x00ff;

            /* start the I2C transaction. use TINYI2C_WRITE as the I2C command
             * is a write operation to registers.
             */
            if (TinyI2C.start(I2C_ADDR, TINYI2C_WRITE) != true) {
                goto fail;
            }

            /* write a byte to REG_GPIOA and REG_GPIOB. by default,
             * MCP23017 automatically increments the register address after
             * the first byte. see "3.2.1 BYTE MODE AND SEQUENTIAL MODE" in
             * the datasheet.
             */
            if (TinyI2C.write(REG_GPIOA) != true) {
                goto fail;
            }

            /* the `high` is written to REG_GPIOA. */
            if (TinyI2C.write(high) != true) {
                goto fail;
            }

            /* the `low` is written to REG_GPIOB. */
            if (TinyI2C.write(low) != true) {
                goto fail;
            }

            /* end the I2C transaction */
            TinyI2C.stop();
            delay(DELAY_PER_CHAR_MS);
            continue;
fail:
            TinyI2C.stop();
            halt();
        }
    }
}

bool init_mcp()
{
    bool success = false;

    /* TinyI2C.init() must be called before I2C transaction */
    TinyI2C.init();

    /* initialize MCP23017. set all ports as output */
    if (TinyI2C.start(I2C_ADDR, TINYI2C_WRITE) != true) {
        goto fail;
    }
    if (TinyI2C.write(REG_IODIRA) != true) {
        goto fail;
    }

    /* bit 0 for output, bit 1 for input. */
    if (TinyI2C.write(0x00) != true) {
        goto fail;
    }
    if (TinyI2C.write(0x00) != true) {
        goto fail;
    }
    success = true;
fail:
    /* when an error occurred, gracefully release the I2C bus, */
    TinyI2C.stop();
    return success;
}

/* turn on the error LED and halt the MCU to indicate an error has occurred */
void halt()
{
    digitalWrite(led_pin, HIGH);
    while (true) {
        delay(1);
    }
}

void setup()
{
    pinMode(led_pin, OUTPUT);

    /* blink the error LED once to indicate the MCU has successfully started
     */
    digitalWrite(led_pin, HIGH);
    delay(500);
    digitalWrite(led_pin, LOW);

    if (init_mcp() != true) {
        goto fail;
    }

    return;
fail:
    halt();
}

void loop()
{
    blink();
}
