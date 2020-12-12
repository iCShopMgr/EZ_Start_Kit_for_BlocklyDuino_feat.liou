/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:19:48 GMT
 */



void setup()
{

  pinMode(17, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(13, OUTPUT);

}


void loop()
{
  analogWrite(17, 200);
  analogWrite(12, 0);
  analogWrite(16, 200);
  analogWrite(13, 0);
  delay(1000);
  analogWrite(17, 0);
  analogWrite(12, 200);
  analogWrite(16, 0);
  analogWrite(13, 200);
  delay(1000);
  analogWrite(17, 0);
  analogWrite(12, 200);
  analogWrite(16, 200);
  analogWrite(13, 0);
  delay(1000);
  analogWrite(17, 200);
  analogWrite(12, 0);
  analogWrite(16, 0);
  analogWrite(13, 200);
  delay(1000);
  analogWrite(17, 0);
  analogWrite(12, 0);
  analogWrite(16, 0);
  analogWrite(13, 0);
  delay(1000);
}