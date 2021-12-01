# Scramble OLED + Encoder Keymap
A Nullbits Scramble macropad QMK keymap for the OLED + Rotary Encoder configuration.

Includes an OLED animation I made from a vector graphic following some online tutorials.

Rotary encoder is mapped to control volume, but could be ported to VIAL if anybody wants to do that.

## Installation
Download the `nullbitsco_scramble_oledvia.hex` file and flash your Scramble PCB with QMK Toolbox.

### If you want to modify the code:
1. Add the `oledvia` directory in this repo to the scramnle keymaps directory of your local QMK install:
```
/keyboards/nullbitsco/scramble/keymaps
```
3. Make your edits and save changes.
4. Run this command from the QMK root to generat the hex file: 
```
qmk compile -kb nullbitsco/scramble -km oledvia
```
4. Use the generated `nullbitsco_scramble_oledvia.hex` file and flash your Scramble PCB with QMK Toolbox
