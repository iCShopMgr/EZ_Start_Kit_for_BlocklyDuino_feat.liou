/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 13 Jul 2020 09:54:45 GMT
 */

#include "Wire.h"
#include "U8g2lib.h"
#include <IRremote.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
IRrecv irrecv(17);
decode_results results;
String ir_type(int tip)
{
  if (tip == 1) {
    return"RC5";
  } else if (tip == 2){
    return"RC6";
  } else if (tip == 3){
    return"NEC";
  } else {
    return"Sony";
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
  irrecv.enableIRIn();

}


void loop()
{
  if (irrecv.decode(&results)) {
      u8g2.firstPage();
    do {
      u8g2.drawStr(0, 0, String(String() + "Code: " + String(results.value, HEX)).c_str());
      u8g2.sendBuffer();
      u8g2.drawStr(0, 10, String(String() + "Type: " + ir_type(results.decode_type)).c_str());
      u8g2.sendBuffer();
    } while (u8g2.nextPage());

    irrecv.resume();
  }
}