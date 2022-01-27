/* 1byte HC12 Receiver example.
  Module // Arduino UNO/NANO
    GND    ->   GND
    Vcc    ->   3.3V
    Tx     ->   D3
    Rx     ->   D4
*/
#include <SoftwareSerial.h>
SoftwareSerial HC12(3, 4); // HC-12 TX Pin, HC-12 RX Pin

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
}
void loop() {
  while (HC12.available()) {        // If HC-12 has data
    float val = HC12.read();
    Serial.println(HC12.read());      // Send the data to Serial monitor
    delay(3000);
  }
}
