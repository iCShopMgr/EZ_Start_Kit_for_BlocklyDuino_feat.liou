/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:35:40 GMT
 */



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
  Serial.begin(9600);


  pinMode(7, INPUT_PULLUP);

}


void loop()
{
  if (c_button()) {
    Serial.println("AB");

  } else if (a_button()) {
    Serial.println("A");
  } else if (b_button()) {
    Serial.println("B");
  } else {

  }
}