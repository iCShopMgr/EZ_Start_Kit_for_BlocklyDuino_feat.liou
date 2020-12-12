/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:31:26 GMT
 */



void motor_LR(int ML, int MR)
{
  if (ML > 0) {
    analogWrite(17, ML);
    analogWrite(12, 0);
  }else {
    analogWrite(17, 0);
    analogWrite(12, ML*(-1));
  }
  if (MR > 0) {
    analogWrite(16, MR);
    analogWrite(13, 0);
  }else {
    analogWrite(16, 0);
    analogWrite(13, MR*(-1));
  }
}

void setup()
{

  pinMode(17, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(13, OUTPUT);

}


void loop()
{
  motor_LR(200, 200);
  delay(1000);
  motor_LR((-200), (-200));
  delay(1000);
  motor_LR((-200), 200);
  delay(1000);
  motor_LR(200, (-200));
  delay(1000);
  motor_LR(0, 0);
  delay(1000);
}