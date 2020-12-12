/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:29:57 GMT
 */



int tracker()
{
  if (digitalRead(10) == 1 && digitalRead(11) == 1) {
    return 0;
  } else if (digitalRead(10) == 0 && digitalRead(11) == 1) {
    return 1;
  } else if (digitalRead(10) == 1 && digitalRead(11) == 0){
    return 2;
  } else {
    return 3;
  }
}

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

  pinMode(10, INPUT);
  pinMode(11, INPUT);

  pinMode(17, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(13, OUTPUT);

}


void loop()
{
  if (tracker() == 0) {
    motor_LR(200, 200);

  } else if (tracker() == 1) {
    motor_LR(0, 200);
  } else if (tracker() == 2) {
    motor_LR(200, 0);
  } else {

  }
}