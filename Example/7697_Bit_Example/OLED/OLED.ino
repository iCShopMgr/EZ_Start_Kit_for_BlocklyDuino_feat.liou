/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:49:49 GMT
 */

#include "Wire.h"
#include "U8g2lib.h"

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);


}


void loop()
{
  u8g2.firstPage();
  do {
    u8g2.drawStr(0, 0, String("HELLO").c_str());
  } while (u8g2.nextPage());
}