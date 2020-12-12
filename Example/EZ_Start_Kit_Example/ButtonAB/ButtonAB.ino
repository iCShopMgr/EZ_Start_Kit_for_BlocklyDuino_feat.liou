/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 13 Jul 2020 09:49:12 GMT
 */

#include "Wire.h"
#include "U8g2lib.h"

String Bstate;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
bool a_button()
{
  if (digitalRead(0) == 1) {
    return false;
  } else {
    return true;
  }
}

bool b_button()
{
  if (digitalRead(7) == 1) {
    return false;
  } else {
    return true;
  }
}

bool c_button()
{
  if (digitalRead(0) == 0 && digitalRead(7) == 0) {
    return true;
  } else {
    return false;
  }
}

void setup()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);

  u8g2.clearDisplay();
  pinMode(7, INPUT_PULLUP);

}


void loop()
{
  if (c_button()) {
    Bstate = "AB";

  } else if (a_button()) {
    Bstate = "A";
  } else if (b_button()) {
    Bstate = "B";
  } else {
    Bstate = "None";

  }
  u8g2.firstPage();
  do {
    u8g2.drawStr(0, 0, String(String() + "State: " + Bstate).c_str());
    u8g2.sendBuffer();
  } while (u8g2.nextPage());
  delay(100);
}