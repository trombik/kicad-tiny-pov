# tiny-pov

A Persistence of Vision, or PoV, device using `ATTiny` and a GPIO expander,
`MCP23017`
((datasheet)[https://ww1.microchip.com/downloads/en/devicedoc/20001952c.pdf]).

The project is intended for students who have mastered Arduino basics. The
code is small, and includes some advanced topics, such as `PROGMEM`, using
external libraries, `platformio` build system, and `I2C`.

## Requirements

* python 3.x
* [tox](https://tox.wiki/en/latest/)

## Usage

Install `platformio`, the toolchain and packages for AVR MCUs. `tox` does
everything and build the project.

```console
tox
```

To run `platformio`, you need to activate the python virtual environment:

```console
source .tox/python/bin/activate
```

Build the project:

```console
pio run
```

Upload the code:

```console
pio run -t upload --upload-port ${SERIAL_PORT}
```

Replace `${SERIAL_PORT}` with the serial port on local machine.
`/dev/ttyUSB${N}` for Linux, `/dev/cuaU${N}` for FreeBSD, `COM${N}` for
Windows.
