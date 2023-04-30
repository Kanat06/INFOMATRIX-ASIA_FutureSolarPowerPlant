#include <iarduino_RTC.h>
String t;
String s; // утро
String f; // утро

String g; // обед
String h; // обед

iarduino_RTC time(RTC_DS1302,2,3,4);  // для модуля DS1302 - RST, CLK(шим), DAT
// iarduino_RTC time(RTC_DS1307);       // для модуля DS1307 с i2C
// iarduino_RTC timeRTC_DS3231);        // для модуля DS3231 с i2C

void setup() {
   delay(300);
   pinMode(12,OUTPUT);
   Serial.begin(9600);
   time.begin();
   s = 060000;
   f = 060005;

   g = 140000;
   h = 140005;
   //time.settime(0, 06, 15, 27, 9, 22, 2); // 0  сек, 30 мин, 18 часов, 12, июня, 2020, четверг
}

void loop() {
   // если прошла 1 секунда выводим время
   if (millis() % 1000 == 0) {
      Serial.println(time.gettime("H:i:s"));
      String t = (time.gettime("His"));
      
      if (s==t){
       digitalWrite (12, HIGH);
        Serial.println ("ON");
      }
      if (f==t){
        digitalWrite (12, LOW);
        Serial.println ("OFF");
      }
       if (g==t){
       digitalWrite (12, HIGH);
        Serial.println ("ON");
      }
      if (h==t){
        digitalWrite (12, LOW);
        Serial.println ("OFF");
      }
      
      delay(1);
   }
}
