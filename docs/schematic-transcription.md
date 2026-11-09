# Schematic Transcription

Transcribed from the Tinkercad schematic export `FINALS COMPORG.pdf` (6 sheets, exported 11/10/2026 2:54:54 AM, "Made with Tinkercad"). The PDF itself is not kept in this repo; this file replaces it.

Conventions on every sheet:

- `U1_5V`, `U1_GND`, `U1_D4` to `U1_D7` are off-sheet net labels coming from the Arduino Uno (U1).
- `Un_mY` labels are gate outputs shared between sheets (for example `U11_1A` is input 1A of AND gate U11).
- `Dn_C` labels are the cathode side of an LED, wired through a 220 Ω resistor on another part of the design.
- Logic IC pin names: OR gates (quad) use `1A, 1B, 1Y … 4A, 4B, 4Y`; the 4-input AND (dual) uses `1A, 1B, 1C, 1D, 1Y` and `2A … 2D, 2Y` with `NC1`, `NC2` unconnected; the 3-input AND (triple) uses `1A, 1B, 1C, 1Y … 3A, 3B, 3C, 3Y`; every IC has `VCC` and `GND`.

## Sheet 1 of 6

| Ref | Part | Value / colour |
|---|---|---|
| U1 | Arduino Uno R3 | pins used: 5V, GND, D4, D5, D6, D7 |
| U2 | Hex inverter | channels 1A–6A, outputs 1Y–6Y |
| U6 | Quad OR gate | |
| U11 | Dual 4-input AND gate | `NC1`, `NC2` |
| D1, D2, D3, D4 | LED | Red |
| D6, D19 | LED | Yellow |
| D7 | LED | Orange |
| R1, R2, R3, R5, R6, R7, R19 | Resistor | 220 Ω |

Net labels: `U1_5V`, `U1_GND`, `U1_D4`, `U1_D5`, `U1_D6`, `U1_D7`, `U8_1Y`, `U11_1A`, `U11_1B`, `U11_1C`, `U11_2D`.

Reading of the sheet: the four red LEDs D1–D4 sit on the counter bits (nets `U1_D4` to `U1_D7`), so they show the current count in binary. The inverter U2 supplies the complemented inputs (A', B', C', D') and U11 forms product terms from them.

## Sheet 2 of 6

| Ref | Part | Value / colour |
|---|---|---|
| U7, U9, U12 | Dual 4-input AND gate | `NC1`, `NC2` |
| U8, U10, U13 | Quad OR gate | |
| D20 | LED | Orange |
| D5 | LED | Green |
| D8, D21 | LED | Blue |
| R4, R8, R9 | Resistor | 220 Ω |

Net labels: `U1_5V`, `U1_GND`, `U1_D4`, `U1_D5`, `U1_D6`, `U1_D7`, `U8_1Y`, `U3_1Y`, `U10_1A`, `U10_1B`, `U11_1A`, `U11_1B`, `U11_1C`, `U11_2D`, `U13_1Y`, `D9_C`, `D20_C`, `D21_C`.

## Sheet 3 of 6

| Ref | Part | Value / colour |
|---|---|---|
| U14 | Triple 3-input AND gate | |
| U15, U4, U19 | Dual 4-input AND gate | `NC1`, `NC2` |
| U16, U21 | Quad OR gate | |
| D9, D24 | LED | Blue |
| D10, D22 | LED | Red |
| D12 | LED | Yellow |
| R10, R12 | Resistor | 220 Ω |

Net labels: `U1_5V`, `U1_GND`, `U1_D4`, `U1_D5`, `U1_D6`, `U1_D7`, `U4_1Y`, `U11_1A`, `U11_1B`, `U11_1C`, `U11_2D`, `U13_1Y`, `U21_1Y`, `D9_C`, `D22_C`, `D24_C`.

## Sheet 4 of 6

| Ref | Part | Value / colour |
|---|---|---|
| U20, U23, U26 | Dual 4-input AND gate | `NC1`, `NC2` |
| U22 | Triple 3-input AND gate | |
| U18, U25 | Quad OR gate | |
| D13 | LED | Orange |
| D14 | LED | Blue |
| D15 | LED | Red |
| R13, R14, R15 | Resistor | 220 Ω |

Net labels: `U1_5V`, `U1_GND`, `U1_D4`, `U1_D5`, `U1_D6`, `U1_D7`, `U11_1B`, `U11_1C`, `U11_2D`, `U18_1Y`, `U22_1Y`, `U25_1Y`, `U26_1Y`, `U26_2Y`.

## Sheet 5 of 6

| Ref | Part | Value / colour |
|---|---|---|
| U27, U3 | Quad OR gate | |
| U28 | Quad AND gate | |
| U5, U17 | Triple 3-input AND gate | |
| D16 | LED | Blue |
| D17, D18, D11 | LED | Green |
| R11, R16, R17, R18, R20, R22, R23, R25 | Resistor | 220 Ω |

Net labels: `U1_5V`, `U1_GND`, `U1_D5`, `U1_D6`, `U1_D7`, `U3_1Y`, `U4_1Y`, `U11_2D`, `U17_1Y`, `U26_1Y`, `U26_2Y`, `U27_1Y`, `D20_C`, `D21_C`, `D22_C`, `D24_C`.

## Sheet 6 of 6

Six LED + resistor output pairs, each LED driven by one gate-output net, all returning to `U1_GND`.

| LED | Colour | Resistor | Driven by net |
|---|---|---|---|
| D25 | Green | R26 (220 Ω) | `U17_1Y` |
| D26 | Yellow | R27 (220 Ω) | `U21_1Y` |
| D27 | Orange | R28 (220 Ω) | `U18_1Y` |
| D28 | Blue | R29 (220 Ω) | `U25_1Y` |
| D29 | Red | R30 (220 Ω) | `U22_1Y` |
| D30 | Blue | R31 (220 Ω) | `U27_1Y` |

The pairing of each LED row to its net follows the order the labels are drawn on the sheet (top label `U17_1Y` to the rightmost pair D25/R26, down to `U27_1Y`); it was read from the exported drawing and should be confirmed in Tinkercad before it is quoted in a report.

## Breadboard annotations (from the Tinkercad Circuits view)

The Circuits view carries text labels on the breadboards that name the Boolean term each gate group produces. Legible labels: `A`, `B`, `C`, `D` (inputs), `A'B'C`, `ABC`, `ABCD'`, `A'B'CD`, `ABC'D`, `AB'CD'`, `X1`, `X3`, `X4`, `X5`, `X6`, `BCD' (X7)`, `X8`, `X10 (AC'D)`, `X11`, `X13 (AB)`. Several labels overlap each other in the editor and are cut off, so this list is **not** complete; check the live design for the rest.
