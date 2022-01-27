/* 1byte HC12 TRANSMITTER example.
  Module // Arduino UNO/NANO
    GND    ->   GND
    Vcc    ->   3.3V
    Tx     ->   D2
    Rx     ->   D3
*/

#include <SoftwareSerial.h>
SoftwareSerial HC12(2, 3); // HC-12 TX Pin, HC-12 RX Pin

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
}
void loop() {
  String vw_send;
  const char msgChar[] =  "B";
  for (int i = 0; i < 100; i++)
  {
    HC12.write((uint8_t *)msgChar, strlen(msgChar));
    //vw_send = ((uint8_t *)msgChar, strlen(msgChar));
    delay (300);
  }
  //HC12.write(vw_send);      // Send that data to HC-12
  delay (15000);
}
