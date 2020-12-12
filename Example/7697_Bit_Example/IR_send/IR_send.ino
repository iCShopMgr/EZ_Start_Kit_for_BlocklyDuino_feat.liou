/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:45:25 GMT
 */

#include <IRremote.h>

IRsend irsend;
int x2i(char *s)
{
  int x = 0;
  for(;;) {
    char c = *s;
    if (c >= '0' && c <= '9') {
      x *= 16;
      x += c - '0';
    }    else if (c >= 'a' && c <= 'f') {
      x *= 16;
      x += (c - 'a') + 10;
    }
    else break;
    s++;
  }
  return x;
}

void setup()
{

}


void loop()
{
  irsend.sendNEC(x2i("ffff00"), 32);
  delay(3000);
}