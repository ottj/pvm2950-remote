/* RM854 Stick - Sending the '12' key code of the Sony RM-854 remote
 *
 * Based on the IRsend Demo and the M5Stack video about remotes https://www.youtube.com/watch?v=V8rmir-Tmy8
 *
 */

#include <M5StickCPlus.h>
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t kIrLed = 9;  // ESP8266 GPIO pin to use.
IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.


void setup() {
  M5.begin();
  irsend.begin();
#if ESP8266
  Serial.begin(115200, SERIAL_8N1, SERIAL_TX_ONLY);
#else  // ESP8266
  Serial.begin(115200, SERIAL_8N1);
#endif  // ESP8266
M5.Lcd.printf("Ready...");
}

void loop() {
   M5.update();
 if (M5.BtnA.wasPressed()){
  M5.Lcd.println("Send Key 12");
  irsend.sendSony(0xD10, 12, 2);  // 12 bits & 2 repeats
   }
 delay(100);
}
