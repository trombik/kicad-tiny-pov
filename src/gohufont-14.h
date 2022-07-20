const static uint16_t fonts[][8] PROGMEM = {
	{
		// decimal 32, hex 0x20 ` `
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 33, hex 0x21 `!`
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00011011111110,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 34, hex 0x22 `"`
		0b00000000000000,
		0b00000000000000,
		0b00000000001110,
		0b00000000000000,
		0b00000000000000,
		0b00000000001110,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 35, hex 0x23 `#`
		0b00000010010000,
		0b00000010010000,
		0b00011111111110,
		0b00000010010000,
		0b00011111111110,
		0b00000010010000,
		0b00000010010000,
		0b00000000000000,
	},
	{
		// decimal 36, hex 0x24 `$`
		0b00001000111000,
		0b00010001000100,
		0b00010001000100,
		0b01111111111111,
		0b00010001000100,
		0b00010001000100,
		0b00001110001000,
		0b00000000000000,
	},
	{
		// decimal 37, hex 0x25 `%`
		0b00000000001000,
		0b00110000010100,
		0b00001100010100,
		0b00010011001000,
		0b00101000110000,
		0b00101000001100,
		0b00010000000000,
		0b00000000000000,
	},
	{
		// decimal 38, hex 0x26 `&`
		0b00000000000000,
		0b00001111000000,
		0b00010000101100,
		0b00010000110010,
		0b00010001010010,
		0b00001110001100,
		0b00010001000000,
		0b00000000000000,
	},
	{
		// decimal 39, hex 0x27 `'`
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000011110,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 40, hex 0x28 `(`
		0b00000000000000,
		0b00000111100000,
		0b00011000011000,
		0b00100000000100,
		0b01000000000010,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 41, hex 0x29 `)`
		0b00000000000000,
		0b00000000000000,
		0b01000000000010,
		0b00100000000100,
		0b00011000011000,
		0b00000111100000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 42, hex 0x2a `*`
		0b00000100010000,
		0b00000010100000,
		0b00000001000000,
		0b00001111111000,
		0b00000001000000,
		0b00000010100000,
		0b00000100010000,
		0b00000000000000,
	},
	{
		// decimal 43, hex 0x2b `+`
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00001111111000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000000000000,
	},
	{
		// decimal 44, hex 0x2c `,`
		0b00000000000000,
		0b00000000000000,
		0b01011000000000,
		0b00111000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 45, hex 0x2d `-`
		0b00000000000000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000000000000,
	},
	{
		// decimal 46, hex 0x2e `.`
		0b00000000000000,
		0b00000000000000,
		0b00011000000000,
		0b00011000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 47, hex 0x2f `/`
		0b00000000000000,
		0b00110000000000,
		0b00001100000000,
		0b00000011000000,
		0b00000000110000,
		0b00000000001100,
		0b00000000000011,
		0b00000000000000,
	},
	{
		// decimal 48, hex 0x30 `0`
		0b00000000000000,
		0b00001111111000,
		0b00010010000100,
		0b00010001000100,
		0b00010000100100,
		0b00010000010100,
		0b00001111111000,
		0b00000000000000,
	},
	{
		// decimal 49, hex 0x31 `1`
		0b00000000000000,
		0b00000000100000,
		0b00000000010000,
		0b00000000001000,
		0b00011111111100,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 50, hex 0x32 `2`
		0b00000000000000,
		0b00011000011000,
		0b00010100000100,
		0b00010010000100,
		0b00010001000100,
		0b00010000100100,
		0b00010000011000,
		0b00000000000000,
	},
	{
		// decimal 51, hex 0x33 `3`
		0b00000000000000,
		0b00001000001000,
		0b00010000000100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00001110111000,
		0b00000000000000,
	},
	{
		// decimal 52, hex 0x34 `4`
		0b00000000000000,
		0b00000011000000,
		0b00000010100000,
		0b00000010010000,
		0b00000010001000,
		0b00011111111100,
		0b00000010000000,
		0b00000000000000,
	},
	{
		// decimal 53, hex 0x35 `5`
		0b00000000000000,
		0b00001000111100,
		0b00010000100100,
		0b00010000100100,
		0b00010000100100,
		0b00010000100100,
		0b00001111000100,
		0b00000000000000,
	},
	{
		// decimal 54, hex 0x36 `6`
		0b00000000000000,
		0b00001111111000,
		0b00010000100100,
		0b00010000100100,
		0b00010000100100,
		0b00010000100100,
		0b00001111000000,
		0b00000000000000,
	},
	{
		// decimal 55, hex 0x37 `7`
		0b00000000000000,
		0b00000000000100,
		0b00000000000100,
		0b00011100000100,
		0b00000011000100,
		0b00000000110100,
		0b00000000001100,
		0b00000000000000,
	},
	{
		// decimal 56, hex 0x38 `8`
		0b00000000000000,
		0b00001110111000,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00001110111000,
		0b00000000000000,
	},
	{
		// decimal 57, hex 0x39 `9`
		0b00000000000000,
		0b00000000111000,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00001001000100,
		0b00000111111000,
		0b00000000000000,
	},
	{
		// decimal 58, hex 0x3a `:`
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00011000110000,
		0b00011000110000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 59, hex 0x3b `;`
		0b00000000000000,
		0b00000000000000,
		0b01011000110000,
		0b00111000110000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 60, hex 0x3c `<`
		0b00000000000000,
		0b00000001000000,
		0b00000010100000,
		0b00000100010000,
		0b00001000001000,
		0b00010000000100,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 61, hex 0x3d `=`
		0b00000000000000,
		0b00000100010000,
		0b00000100010000,
		0b00000100010000,
		0b00000100010000,
		0b00000100010000,
		0b00000100010000,
		0b00000000000000,
	},
	{
		// decimal 62, hex 0x3e `>`
		0b00000000000000,
		0b00010000000100,
		0b00001000001000,
		0b00000100010000,
		0b00000010100000,
		0b00000001000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 63, hex 0x3f `?`
		0b00000000000000,
		0b00000000000100,
		0b00000000000010,
		0b00011010000010,
		0b00000001000010,
		0b00000000100010,
		0b00000000011100,
		0b00000000000000,
	},
	{
		// decimal 64, hex 0x40 `@`
		0b00001111111100,
		0b00010000000010,
		0b00010011110010,
		0b00010100001010,
		0b00010100001010,
		0b00010010001010,
		0b00010111111100,
		0b00000000000000,
	},
	{
		// decimal 65, hex 0x41 `A`
		0b00000000000000,
		0b00011111111000,
		0b00000001000100,
		0b00000001000100,
		0b00000001000100,
		0b00000001000100,
		0b00011111111000,
		0b00000000000000,
	},
	{
		// decimal 66, hex 0x42 `B`
		0b00000000000000,
		0b00011111111100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00001110111000,
		0b00000000000000,
	},
	{
		// decimal 67, hex 0x43 `C`
		0b00000000000000,
		0b00001111111000,
		0b00010000000100,
		0b00010000000100,
		0b00010000000100,
		0b00010000000100,
		0b00001000001000,
		0b00000000000000,
	},
	{
		// decimal 68, hex 0x44 `D`
		0b00000000000000,
		0b00011111111100,
		0b00010000000100,
		0b00010000000100,
		0b00010000000100,
		0b00001000001000,
		0b00000111110000,
		0b00000000000000,
	},
	{
		// decimal 69, hex 0x45 `E`
		0b00000000000000,
		0b00011111111100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00010000000100,
		0b00010000000100,
		0b00000000000000,
	},
	{
		// decimal 70, hex 0x46 `F`
		0b00000000000000,
		0b00011111111100,
		0b00000001000100,
		0b00000001000100,
		0b00000001000100,
		0b00000000000100,
		0b00000000000100,
		0b00000000000000,
	},
	{
		// decimal 71, hex 0x47 `G`
		0b00000000000000,
		0b00001111111000,
		0b00010000000100,
		0b00010000000100,
		0b00010001000100,
		0b00010001000100,
		0b00001111001000,
		0b00000000000000,
	},
	{
		// decimal 72, hex 0x48 `H`
		0b00000000000000,
		0b00011111111100,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00000001000000,
		0b00011111111100,
		0b00000000000000,
	},
	{
		// decimal 73, hex 0x49 `I`
		0b00000000000000,
		0b00000000000000,
		0b00010000000100,
		0b00011111111100,
		0b00010000000100,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 74, hex 0x4a `J`
		0b00000000000000,
		0b00001100000000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00001111111100,
		0b00000000000000,
	},
	{
		// decimal 75, hex 0x4b `K`
		0b00000000000000,
		0b00011111111100,
		0b00000001000000,
		0b00000010100000,
		0b00000100010000,
		0b00001000001000,
		0b00010000000100,
		0b00000000000000,
	},
	{
		// decimal 76, hex 0x4c `L`
		0b00000000000000,
		0b00011111111100,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00000000000000,
	},
	{
		// decimal 77, hex 0x4d `M`
		0b00011111111100,
		0b00000000001000,
		0b00000000010000,
		0b00000001100000,
		0b00000000010000,
		0b00000000001000,
		0b00011111111100,
		0b00000000000000,
	},
	{
		// decimal 78, hex 0x4e `N`
		0b00000000000000,
		0b00011111111100,
		0b00000000011000,
		0b00000001100000,
		0b00000110000000,
		0b00011000000000,
		0b00011111111100,
		0b00000000000000,
	},
	{
		// decimal 79, hex 0x4f `O`
		0b00000000000000,
		0b00001111111000,
		0b00010000000100,
		0b00010000000100,
		0b00010000000100,
		0b00010000000100,
		0b00001111111000,
		0b00000000000000,
	},
	{
		// decimal 80, hex 0x50 `P`
		0b00000000000000,
		0b00011111111100,
		0b00000001000100,
		0b00000001000100,
		0b00000001000100,
		0b00000001000100,
		0b00000000111000,
		0b00000000000000,
	},
	{
		// decimal 81, hex 0x51 `Q`
		0b00000000000000,
		0b00001111111000,
		0b00010000000100,
		0b00010000000100,
		0b00010110000100,
		0b00001000000100,
		0b00110111111000,
		0b00000000000000,
	},
	{
		// decimal 82, hex 0x52 `R`
		0b00000000000000,
		0b00011111111100,
		0b00000001000100,
		0b00000001000100,
		0b00000011000100,
		0b00000101000100,
		0b00011000111000,
		0b00000000000000,
	},
	{
		// decimal 83, hex 0x53 `S`
		0b00000000000000,
		0b00001000111000,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00010001000100,
		0b00001110001000,
		0b00000000000000,
	},
	{
		// decimal 84, hex 0x54 `T`
		0b00000000000100,
		0b00000000000100,
		0b00000000000100,
		0b00011111111100,
		0b00000000000100,
		0b00000000000100,
		0b00000000000100,
		0b00000000000000,
	},
	{
		// decimal 85, hex 0x55 `U`
		0b00000000000000,
		0b00001111111100,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00001111111100,
		0b00000000000000,
	},
	{
		// decimal 86, hex 0x56 `V`
		0b00000000000000,
		0b00000000111100,
		0b00000111000000,
		0b00011000000000,
		0b00011000000000,
		0b00000111000000,
		0b00000000111100,
		0b00000000000000,
	},
	{
		// decimal 87, hex 0x57 `W`
		0b00000011111100,
		0b00011100000000,
		0b00000010000000,
		0b00000001110000,
		0b00000010000000,
		0b00011100000000,
		0b00000011111100,
		0b00000000000000,
	},
	{
		// decimal 88, hex 0x58 `X`
		0b00000000000000,
		0b00011000001100,
		0b00000110110000,
		0b00000001000000,
		0b00000001000000,
		0b00000110110000,
		0b00011000001100,
		0b00000000000000,
	},
	{
		// decimal 89, hex 0x59 `Y`
		0b00000000001100,
		0b00000000110000,
		0b00000001000000,
		0b00011110000000,
		0b00000001000000,
		0b00000000110000,
		0b00000000001100,
		0b00000000000000,
	},
	{
		// decimal 90, hex 0x5a `Z`
		0b00000000000000,
		0b00011100000100,
		0b00010010000100,
		0b00010001000100,
		0b00010000100100,
		0b00010000010100,
		0b00010000001100,
		0b00000000000000,
	},
	{
		// decimal 91, hex 0x5b `[`
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00111111111110,
		0b00100000000010,
		0b00100000000010,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 92, hex 0x5c `\`
		0b00000000000000,
		0b00000000000011,
		0b00000000001100,
		0b00000000110000,
		0b00000011000000,
		0b00001100000000,
		0b00110000000000,
		0b00000000000000,
	},
	{
		// decimal 93, hex 0x5d `]`
		0b00000000000000,
		0b00000000000000,
		0b00100000000010,
		0b00100000000010,
		0b00111111111110,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 94, hex 0x5e `^`
		0b00000000000000,
		0b00000000001000,
		0b00000000000100,
		0b00000000000010,
		0b00000000000100,
		0b00000000001000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 95, hex 0x5f `_`
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
		0b00100000000000,
	},
	{
		// decimal 96, hex 0x60 ```
		0b00000000000000,
		0b00000000000010,
		0b00000000000100,
		0b00000000001000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 97, hex 0x61 `a`
		0b00000000000000,
		0b00001110000000,
		0b00010001010000,
		0b00010001010000,
		0b00010001010000,
		0b00001001010000,
		0b00011111100000,
		0b00000000000000,
	},
	{
		// decimal 98, hex 0x62 `b`
		0b00000000000000,
		0b00011111111110,
		0b00010000100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001111100000,
		0b00000000000000,
	},
	{
		// decimal 99, hex 0x63 `c`
		0b00000000000000,
		0b00001111100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001000100000,
		0b00000000000000,
	},
	{
		// decimal 100, hex 0x64 `d`
		0b00000000000000,
		0b00001111100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001000010000,
		0b00011111111110,
		0b00000000000000,
	},
	{
		// decimal 101, hex 0x65 `e`
		0b00000000000000,
		0b00001111100000,
		0b00010010010000,
		0b00010010010000,
		0b00010010010000,
		0b00010010010000,
		0b00010011100000,
		0b00000000000000,
	},
	{
		// decimal 102, hex 0x66 `f`
		0b00000000000000,
		0b00000000000000,
		0b00011111111100,
		0b00000000100010,
		0b00000000100010,
		0b00000000100010,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 103, hex 0x67 `g`
		0b00000000000000,
		0b00001111100000,
		0b10010000010000,
		0b10010000010000,
		0b10010000010000,
		0b10001000010000,
		0b01111111110000,
		0b00000000000000,
	},
	{
		// decimal 104, hex 0x68 `h`
		0b00000000000000,
		0b00011111111110,
		0b00000000100000,
		0b00000000010000,
		0b00000000010000,
		0b00000000010000,
		0b00011111100000,
		0b00000000000000,
	},
	{
		// decimal 105, hex 0x69 `i`
		0b00000000000000,
		0b00000000010000,
		0b00000000010000,
		0b00011111110110,
		0b00010000000000,
		0b00010000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 106, hex 0x6a `j`
		0b00000000000000,
		0b10000000000000,
		0b10000000000000,
		0b10000000010000,
		0b01111111110110,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 107, hex 0x6b `k`
		0b00000000000000,
		0b00011111111110,
		0b00000010000000,
		0b00000010000000,
		0b00000101000000,
		0b00001000100000,
		0b00010000000000,
		0b00000000000000,
	},
	{
		// decimal 108, hex 0x6c `l`
		0b00000000000000,
		0b00000000000000,
		0b00000000000010,
		0b00001111111110,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00000000000000,
	},
	{
		// decimal 109, hex 0x6d `m`
		0b00011111110000,
		0b00000000010000,
		0b00000000010000,
		0b00011111110000,
		0b00000000010000,
		0b00000000010000,
		0b00011111100000,
		0b00000000000000,
	},
	{
		// decimal 110, hex 0x6e `n`
		0b00000000000000,
		0b00011111110000,
		0b00000000010000,
		0b00000000010000,
		0b00000000010000,
		0b00000000010000,
		0b00011111100000,
		0b00000000000000,
	},
	{
		// decimal 111, hex 0x6f `o`
		0b00000000000000,
		0b00001111100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001111100000,
		0b00000000000000,
	},
	{
		// decimal 112, hex 0x70 `p`
		0b00000000000000,
		0b11111111110000,
		0b00010000100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001111100000,
		0b00000000000000,
	},
	{
		// decimal 113, hex 0x71 `q`
		0b00000000000000,
		0b00001111100000,
		0b00010000010000,
		0b00010000010000,
		0b00010000010000,
		0b00001000010000,
		0b11111111110000,
		0b00000000000000,
	},
	{
		// decimal 114, hex 0x72 `r`
		0b00000000000000,
		0b00011111110000,
		0b00000000100000,
		0b00000000010000,
		0b00000000010000,
		0b00000000010000,
		0b00000000100000,
		0b00000000000000,
	},
	{
		// decimal 115, hex 0x73 `s`
		0b00000000000000,
		0b00010001100000,
		0b00010010010000,
		0b00010010010000,
		0b00010010010000,
		0b00010010010000,
		0b00001100000000,
		0b00000000000000,
	},
	{
		// decimal 116, hex 0x74 `t`
		0b00000000000000,
		0b00000000000000,
		0b00000000010000,
		0b00001111111110,
		0b00010000010000,
		0b00010000010000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 117, hex 0x75 `u`
		0b00000000000000,
		0b00001111110000,
		0b00010000000000,
		0b00010000000000,
		0b00010000000000,
		0b00001000000000,
		0b00011111110000,
		0b00000000000000,
	},
	{
		// decimal 118, hex 0x76 `v`
		0b00000000000000,
		0b00000001110000,
		0b00000110000000,
		0b00011000000000,
		0b00011000000000,
		0b00000110000000,
		0b00000001110000,
		0b00000000000000,
	},
	{
		// decimal 119, hex 0x77 `w`
		0b00000111110000,
		0b00011000000000,
		0b00000100000000,
		0b00000011000000,
		0b00000100000000,
		0b00011000000000,
		0b00000111110000,
		0b00000000000000,
	},
	{
		// decimal 120, hex 0x78 `x`
		0b00000000000000,
		0b00011000110000,
		0b00000101000000,
		0b00000010000000,
		0b00000010000000,
		0b00000101000000,
		0b00011000110000,
		0b00000000000000,
	},
	{
		// decimal 121, hex 0x79 `y`
		0b00000000000000,
		0b00001111110000,
		0b10010000000000,
		0b10010000000000,
		0b10010000000000,
		0b10001000000000,
		0b01111111110000,
		0b00000000000000,
	},
	{
		// decimal 122, hex 0x7a `z`
		0b00000000000000,
		0b00011000010000,
		0b00010100010000,
		0b00010010010000,
		0b00010001010000,
		0b00010000110000,
		0b00010000010000,
		0b00000000000000,
	},
	{
		// decimal 123, hex 0x7b `{`
		0b00000010000000,
		0b00000010000000,
		0b00000010000000,
		0b00111101111100,
		0b01000000000010,
		0b01000000000010,
		0b01000000000010,
		0b00000000000000,
	},
	{
		// decimal 124, hex 0x7c `|`
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b01111111111110,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
		0b00000000000000,
	},
	{
		// decimal 125, hex 0x7d `}`
		0b00000000000000,
		0b01000000000010,
		0b01000000000010,
		0b01000000000010,
		0b00111101111100,
		0b00000010000000,
		0b00000010000000,
		0b00000010000000,
	},
	{
		// decimal 126, hex 0x7e `~`
		0b00000011000000,
		0b00000000100000,
		0b00000000100000,
		0b00000001000000,
		0b00000010000000,
		0b00000010000000,
		0b00000001100000,
		0b00000000000000,
	},
};