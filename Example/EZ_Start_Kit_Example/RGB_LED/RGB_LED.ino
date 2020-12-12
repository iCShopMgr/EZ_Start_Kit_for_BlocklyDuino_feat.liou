/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 13 Jul 2020 10:00:33 GMT
 */

#include <Adafruit_NeoPixel.h>

int i;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(3, 4,NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();

  pixels.setBrightness(30);


}


void loop()
{
  for (i = 0; i <= 2; i++) {
    pixels.setPixelColor(i,pixels.Color(255,0,0));
    pixels.show();
  }
  delay(500);
  for (i = 0; i <= 2; i++) {
    pixels.setPixelColor(i,pixels.Color(51,255,51));
    pixels.show();
  }
  delay(500);
  for (i = 0; i <= 2; i++) {
    pixels.setPixelColor(i,pixels.Color(102,102,204));
    pixels.show();
  }
  delay(500);
  for (i = 0; i <= 2; i++) {
    pixels.setPixelColor(i, pixels.Color(100,100,100));
    pixels.show();
  }
  delay(500);
}