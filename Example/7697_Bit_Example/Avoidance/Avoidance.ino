/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:33:14 GMT
 */

#include <Ultrasonic.h>

Ultrasonic ultrasonic_(2, 5);

void setup()
{

  pinMode(17, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(13, OUTPUT);

}


void loop()
{
  if (ultrasonic_.convert(ultrasonic_.timing(), Ultrasonic::CM) > 12) {
    analogWrite(17, 150);
    analogWrite(12, 0);
    analogWrite(16, 150);
    analogWrite(13, 0);

  } else {
    analogWrite(17, 0);
    analogWrite(12, 150);
    analogWrite(16, 150);
    analogWrite(13, 0);

  }
}