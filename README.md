# FINALS COMPORG

Final project for **COMPORG (Computer Architecture & Organization)**, Asia Pacific College, BSIT, Year 1 Term 1.

A gate-level digital logic circuit built in Tinkercad Circuits. An Arduino Uno R3 counts from 0 to 15 and puts the count on four pins as a 4-bit binary number. Banks of NOT, AND and OR ICs on the breadboards decode those four bits into product terms (the breadboard labels include `ABC'D`, `AC'D`, `BCD'` and `AB`) that light a set of coloured LEDs, each behind a 220 Ω resistor.

## Design at a glance

| | |
|---|---|
| Platform | Tinkercad Circuits (Arduino Uno R3, simulated) |
| Inputs | 4 bits from the Arduino on D7 (MSB, input A), D6 (B), D5 (C), D4 (LSB, input D) |
| Logic | 1 hex inverter, 10 quad OR, 10 dual 4-input AND, 4 triple 3-input AND, 1 quad AND |
| Outputs | 29 LEDs (8 red, 5 green, 4 yellow, 4 orange, 8 blue), 29 × 220 Ω resistors |
| Breadboards | 1 small + 6 standard |

## Repository layout

```
firmware/finals_comporg_counter/finals_comporg_counter.ino   Arduino sketch (the counter)
docs/bill-of-materials.md                                    Parts list with totals
docs/schematic-transcription.md                              All 6 schematic sheets as text
```

## Run it

1. Open the project in Tinkercad Circuits: [FINALS COMPORG](https://www.tinkercad.com/things/2AHTjSkFMHO-finals-comporg) (the owner has to give you access first).
2. Open **Code** and paste in `firmware/finals_comporg_counter/finals_comporg_counter.ino`, or use the sketch already attached to the Arduino.
3. Press **Start Simulation**. The count steps every 300 ms and the LEDs follow.

## Authors

- Jan Rain Alcantara
- Rhona-Mae Prudenciado
- Bludylan Cyrus Pizarra
- Evan Prens Exanes

## Notes

- The Tinkercad schematic export and the BOM export were transcribed to Markdown in `docs/`; the original PDF and CSV are intentionally not stored here.
- The sketch carries the course header (program name, author, date, history table) inside the file.
