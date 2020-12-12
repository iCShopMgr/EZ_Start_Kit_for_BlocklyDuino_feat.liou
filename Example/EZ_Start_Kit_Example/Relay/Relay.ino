/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Tue, 15 Sep 2020 06:20:38 GMT
 */

/*

 * 部份程式碼由吉哥積木產生
 * https://sites.google.com/jes.mlc.edu.tw/ljj/linkit7697

*/

#include "Wire.h"
#include "U8g2lib.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);

  u8g2.clearDisplay();
  pinMode(5, OUTPUT);

}


void loop()
{
  u8g2.firstPage();
  do {
    digitalWrite(5, HIGH);
    u8g2.drawStr(0, 0, String(String() + "Relay: " + "ON").c_str());
    delay(1000);

    u8g2.sendBuffer();
  } while (u8g2.nextPage());
  u8g2.firstPage();
  do {
    digitalWrite(5, LOW);
    u8g2.drawStr(0, 0, String(String() + "Relay: " + "OFF").c_str());
    delay(1000);

    u8g2.sendBuffer();
  } while (u8g2.nextPage());
}