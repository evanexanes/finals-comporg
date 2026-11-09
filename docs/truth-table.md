# Truth Table and Boolean Logic

The four counter bits are the inputs. **A** is the most significant bit (Arduino pin D7), then **B** (D6), **C** (D5) and **D** (D4, least significant). The counter in [the sketch](../firmware/finals_comporg_counter/finals_comporg_counter.ino) walks through all 16 combinations, so the circuit sees every row of this table in turn.

## Simplified expression

From the design notes:

$$F(A, B, C, D) = AB'C + AC'D + BCD + A'B'C'D'$$

A prime (`'`) means NOT. The hex inverter U2 supplies the complemented inputs `A'`, `B'`, `C'` and `D'`.

## Truth table

1 means the output is high.

| Count | A | B | C | D | X1 | X2 | X3 | X4 | X5 | X6 | X7 | X8 | X9 | X10 | X11 | X12 | X13 |
|---:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 1 | 0 | 0 | 0 | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 2 | 0 | 0 | 1 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 3 | 0 | 0 | 1 | 1 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 4 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 5 | 0 | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 6 | 0 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
| 7 | 0 | 1 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 |
| 8 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 |
| 9 | 1 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 |
| 10 | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |
| 11 | 1 | 0 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 |
| 12 | 1 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
| 13 | 1 | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 |
| 14 | 1 | 1 | 1 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 0 | 0 | 0 | 0 | 1 |
| 15 | 1 | 1 | 1 | 1 | 1 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |

## Reading the table

- Counts 0 to 12 each raise exactly one output, in order: count 0 raises X1, count 1 raises X2, and so on up to count 12 raising X13.
- Count 13 (1101) raises X9 to X13, count 14 (1110) raises X1 to X8 and X13, and count 15 (1111) raises X1, X5 and X13.
- Those last three rows are not one-per-count because the product terms overlap. For example X13 is `AB`, so it is high on every count from 12 to 15.

## Each output by count

| Output | High at counts | Binary (ABCD) |
|---|---|---|
| X1 | 0, 14, 15 | 0000, 1110, 1111 |
| X2 | 1, 14 | 0001, 1110 |
| X3 | 2, 14 | 0010, 1110 |
| X4 | 3, 14 | 0011, 1110 |
| X5 | 4, 14, 15 | 0100, 1110, 1111 |
| X6 | 5, 14 | 0101, 1110 |
| X7 | 6, 14 | 0110, 1110 |
| X8 | 7, 14 | 0111, 1110 |
| X9 | 8, 13 | 1000, 1101 |
| X10 | 9, 13 | 1001, 1101 |
| X11 | 10, 13 | 1010, 1101 |
| X12 | 11, 13 | 1011, 1101 |
| X13 | 12, 13, 14, 15 | 1100, 1101, 1110, 1111 |

## Cross-check against the breadboard labels

Three outputs carry their Boolean term in the Tinkercad labels. Each matches the table:

| Label | Term | High at counts | Matches the table |
|---|---|---|---|
| X7 | `BCD'` | 6, 14 | yes |
| X10 | `AC'D` | 9, 13 | yes |
| X13 | `AB` | 12, 13, 14, 15 | yes |
