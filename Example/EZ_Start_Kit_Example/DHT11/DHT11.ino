/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 13 Jul 2020 09:52:45 GMT
 */

#include "Wire.h"
#include "U8g2lib.h"
#include <DHT.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
DHT dht11_p10(10, DHT11);

void setup()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);

  u8g2.clearDisplay();
  dht11_p10.begin();

}


void loop()
{
  u8g2.firstPage();
  do {
    u8g2.drawStr(0, 0, String(String() + "Temp: " + dht11_p10.readTemperature()).c_str());
    u8g2.sendBuffer();
    u8g2.drawStr(0, 10, String(String() + "Humid: " + dht11_p10.readHumidity()).c_str());
    u8g2.sendBuffer();
  } while (u8g2.nextPage());
  delay(100);
}