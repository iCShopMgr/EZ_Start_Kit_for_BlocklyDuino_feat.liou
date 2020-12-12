/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 17 Feb 2020 10:51:31 GMT
 */



int item[] = {0, 1, 2};

int i;

void setup()
{
  Serial.begin(9600);

  int i_end= (sizeof(item)/sizeof(item[0]));
  for (i = 0;
      (0 <= i_end) ? i < i_end : i > i_end;
      i += (0 <= i_end) ? 1 : -1) {
    Serial.print((item[i]));
  }
  Serial.println("");
  item[0] = 3;
  int i_end2= (sizeof(item)/sizeof(item[0]));
  for (i = 0;
      (0 <= i_end2) ? i < i_end2 : i > i_end2;
      i += (0 <= i_end2) ? 1 : -1) {
    Serial.print((item[i]));
  }
  Serial.println("");
}


void loop()
{

}