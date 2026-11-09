# Bill of Materials

Transcribed from the Tinkercad BOM export (`bom.csv`) for the project **FINALS COMPORG**. The original CSV is not kept in this repo; this file replaces it.

## Components

| Name (reference designators) | Qty | Component |
|---|---:|---|
| U1 | 1 | Arduino Uno R3 |
| 1 | 1 | Breadboard Small |
| 2, 11, 18, 21, 39, 46 | 6 | Breadboard |
| U2 | 1 | Hex Inverter |
| U3, U6, U8, U10, U13, U16, U21, U18, U25, U27 | 10 | Quad OR gate |
| U4, U7, U9, U11, U12, U15, U19, U20, U23, U26 | 10 | Dual 4-Input AND gate |
| U5, U14, U17, U22 | 4 | Triple 3-Input AND gate |
| U28 | 1 | Quad AND gate |
| D1, D2, D3, D4, D10, D15, D22, D29 | 8 | Red LED |
| D5, D11, D17, D18, D25 | 5 | Green LED |
| D6, D12, D19, D26 | 4 | Yellow LED |
| D7, D13, D20, D27 | 4 | Orange LED |
| D8, D9, D14, D16, D21, D24, D28, D30 | 8 | Blue LED |
| R1 to R20, R22, R23, R25 to R31 (29 parts, R21 and R24 are not used) | 29 | 220 Ω Resistor |

## Totals

| Group | Qty |
|---|---:|
| Logic ICs (1 inverter + 10 OR + 10 AND-2×4 + 4 AND-3×3 + 1 AND-4×2 quad) | 26 |
| LEDs (8 red + 5 green + 4 yellow + 4 orange + 8 blue) | 29 |
| Resistors (220 Ω) | 29 |
| Breadboards (1 small + 6 standard) | 7 |
| Microcontroller | 1 |

## Cross-check against the schematic

The six schematic sheets (see [schematic-transcription.md](schematic-transcription.md)) list the same reference designators: every `U`, `D` and `R` in the BOM appears on exactly one sheet, and the LED colour counts and the 29 resistors match.
