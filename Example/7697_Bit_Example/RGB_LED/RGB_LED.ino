/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:49:12 GMT
 */

#include <Adafruit_NeoPixel.h>

int i;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8,4,NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();

  pixels.setBrightness(30);


}


void loop()
{
  for (i = 0; i <= 8; i++) {
    pixels.setPixelColor(i,pixels.Color(255,0,0));
  }
  pixels.show();
  delay(1000);
  for (i = 0; i <= 8; i++) {
    pixels.setPixelColor(i,pixels.Color(51,255,51));
  }
  pixels.show();
  delay(1000);
  for (i = 0; i <= 8; i++) {
    pixels.setPixelColor(i,pixels.Color(51,51,255));
  }
  pixels.show();
  delay(1000);
}