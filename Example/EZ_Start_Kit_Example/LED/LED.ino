/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 13 Jul 2020 09:55:40 GMT
 */



int i;

void setup()
{

  pinMode(13, OUTPUT);

  pinMode(12, OUTPUT);

  pinMode(11, OUTPUT);

}


void loop()
{
  for (i = 0; i <= 255; i++) {
    analogWrite(13, i);
    delay(1);
  }
  for (i = 255; i >= 0; i--) {
    analogWrite(13, i);
    delay(1);
  }
  for (i = 0; i <= 255; i++) {
    analogWrite(12, i);
    delay(1);
  }
  for (i = 255; i >= 0; i--) {
    analogWrite(12, i);
    delay(1);
  }
  for (i = 0; i <= 255; i++) {
    analogWrite(11, i);
    delay(1);
  }
  for (i = 255; i >= 0; i--) {
    analogWrite(11, i);
    delay(1);
  }
}