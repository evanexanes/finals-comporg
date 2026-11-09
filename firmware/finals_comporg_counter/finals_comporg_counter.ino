/*
 * Program name : finals_comporg_counter.ino
 * Description  : 4-bit binary counter (0 to 15) on pins D4-D7 of an
 *                Arduino Uno R3. The gate-level logic network on the
 *                breadboards decodes these four bits into the LED outputs.
 * Author       : Exanes, Evan Prens
 * Date Compiled: 2026-11-10
 *
 * History
 * Date        Description                       Programmer name
 * ----------  --------------------------------  ---------------
 * 2026-11-10  Initial Implementation            EPPE
 */

// ---- Pin map: one Arduino pin per bit of the counter ----
const int bit3 = 7; // Most Significant Bit  (input A of the logic network)
const int bit2 = 6; // input B
const int bit1 = 5; // input C
const int bit0 = 4; // Least Significant Bit (input D)

// setup(): runs once at power-up. Makes all four counter pins outputs.
void setup() {
  // Set all pins as OUTPUT
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
}

// loop(): runs forever. Counts 0 to 15 and puts each number on the four pins.
void loop() {
  // Loop through numbers 0 to 15 (0000 to 1111 in binary)
  for (int i = 0; i < 16; i++) {
    // Output each bit to the corresponding pin
    digitalWrite(bit0, (i >> 0) & 1); // D4
    digitalWrite(bit1, (i >> 1) & 1); // D5
    digitalWrite(bit2, (i >> 2) & 1); // D6
    digitalWrite(bit3, (i >> 3) & 1); // D7

    delay(300); // hold each number for 300 ms
  }
}
