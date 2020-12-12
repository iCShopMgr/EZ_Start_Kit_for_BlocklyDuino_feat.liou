/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 17 Feb 2020 10:57:14 GMT
 */



char item[] = {"Hello"};

void setup()
{
  Serial.begin(9600);

  // ASCII:
  // 104 = h
  item[0] = 104;
  Serial.println(item);
}


void loop()
{

}