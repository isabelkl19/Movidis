/* 1byte HC12 TRANSMITTER example.
  Module // Arduino UNO/NANO
    GND    ->   GND
    Vcc    ->   3.3V
    Tx     ->   D2
    Rx     ->   D3
*/

#include <SoftwareSerial.h>
SoftwareSerial HC12(2, 3); // HC-12 TX Pin, HC-12 RX Pin
int i = 0;

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
}
void loop() {
  for (i; i <= 10; i++ ) {
    HC12.write(19);
    delay(3000);
  }
  i = 15;
}
