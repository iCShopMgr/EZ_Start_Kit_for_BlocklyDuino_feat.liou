/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:41:54 GMT
 */

#include <Wire.h>
#include "Adafruit_TCS34725.h"

int now[3], rec_r[3], rec_g[3], rec_b[3], rec_y[3], rec_a[3], rec_p[3], rec_c1[3], rec_c2[3], rec_c3[3], range_ = 50;
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_24MS, TCS34725_GAIN_1X);
uint16_t r_, g_, b_, c_;
int tcs_read_red()
{
  tcs.getRawData(&r_, &g_, &b_, &c_);
  return r_;
}

int tcs_read_green()
{
  tcs.getRawData(&r_, &g_, &b_, &c_);
  return g_;
}

int tcs_read_blue()
{
  tcs.getRawData(&r_, &g_, &b_, &c_);
  return b_;
}

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

int tcs_check_1()
{
  tcs.getRawData(&r_, &g_, &b_, &c_);now[0] = r_;now[1] = g_;now[2] = b_;int count = 0;for (int i=0;i<3;i++) {if (abs(now[i] - rec_r[i]) < range_) {count += 1;}}if (count == 3) {return true;} else {return false;}
}

void setup()
{
  Serial.begin(9600);

  tcs.begin();
  pinMode(0, INPUT_PULLUP);

  digitalWrite(7, LOW);
  while (!a_button()) {
  }
  delay(100);
  tcs.getRawData(&r_, &g_, &b_, &c_);
  rec_r[0] = r_;
  rec_r[1] = g_;
  rec_r[2] = b_;
}


void loop()
{
  if (tcs_check_1()) {
    Serial.println("Red");

  }
}