# Scramble OLED + Encoder Keymap
QMK keymap for the [Nullbits Scramble macropad](https://nullbits.co/scramble/) in OLED + Encoder configuration.

Includes an OLED animation I made from vector graphics following some online tutorials.

Rotary encoder is mapped to control volume, but could be ported to VIAL if anybody wants to make a PR for that.

## Installation
Download the `nullbitsco_scramble_oledvia.hex` file in this repo and flash your Scramble PCB with [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).

## Development
### Requirments
 - Install and set up [QMK](https://docs.qmk.fm/#/newbs_getting_started).

### Setup
1. Add the `oledvia` directory in this repo to the scramnle keymaps directory of your local QMK install:
```
/keyboards/nullbitsco/scramble/keymaps
```
3. Make your edits and save changes.
4. Run this command from the QMK root to generat the hex file: 
```
qmk compile -kb nullbitsco/scramble -km oledvia
```
4. Use the generated `nullbitsco_scramble_oledvia.hex` file and flash your Scramble PCB with [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).
