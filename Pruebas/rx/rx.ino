/* 1byte HC12 Receiver example.
  Module // Arduino UNO/NANO
    GND    ->   GND
    Vcc    ->   3.3V
    Tx     ->   D3
    Rx     ->   D4
*/
#include <SoftwareSerial.h>
SoftwareSerial HC12(3, 4); // HC-12 TX Pin, HC-12 RX Pin
int count = 0;

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
}
void loop() {
  while (HC12.available()) {        // If HC-12 has data
    int val = HC12.read();
    Serial.print(val);      // Send the data to Serial monitor
    if (val == 19) {
      count++;
    }
  }
  Serial.println(count);
  delay(1000);
}
