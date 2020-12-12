/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:43:44 GMT
 */

#include <IRremote.h>

IRrecv irrecv(15);
decode_results results;
String ir_type(int tip)
{
  if (tip == 1) {
    return"RC5";
  } else if (tip == 2){
    return"RC6";
  } else if (tip == 3){
    return"NEC";
  } else {
    return"Sony";
  }
}

void setup()
{
  Serial.begin(9600);


  irrecv.enableIRIn();

}


void loop()
{
  if (irrecv.decode(&results)) {
      Serial.print(String(results.value, HEX));
    Serial.print(", ");
    Serial.println(ir_type(results.decode_type));

    irrecv.resume();
  }
}