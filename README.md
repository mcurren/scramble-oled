# Scramble OLED + Encoder Keymap
QMK keymap for the [Nullbits Scramble macropad](https://nullbits.co/scramble/) in OLED + Encoder configuration.

Includes an [OLED animation](oledvia/oled_ed.h) I made from vector graphics following some online tutorials.

The Rotary encoder [default mapping](https://github.com/mcurren/scramble-oled/blob/9a1999ff509de581443132e7fd0acd0f00dd51e0/oledvia/keymap.c#L64-L71) is for volume control, but this keymap could be ported to VIAL if anybody wants to make a PR for that.

## Installation
Download the [hex file](nullbitsco_scramble_oledvia.hex) in this repo and flash your Scramble PCB with [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).

## Development
### Requirments
 - Install and set up [QMK](https://docs.qmk.fm/#/newbs_getting_started).

### Setup
1. Add the `oledvia` directory in this repo to the Scramble keymaps directory of your local QMK install:
```
/keyboards/nullbitsco/scramble/keymaps
```
3. Make your edits and save changes.
4. Run this command from the QMK root to generate your new hex file: 
```
qmk compile -kb nullbitsco/scramble -km oledvia
```
4. Flash your Scramble PCB with the generated `nullbitsco_scramble_oledvia.hex` file using [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).
