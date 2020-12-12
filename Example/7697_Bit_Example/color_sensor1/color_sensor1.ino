/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 05 Feb 2020 23:38:40 GMT
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

void setup()
{
  tcs.begin();
  Serial.begin(9600);

  digitalWrite(7, LOW);
}


void loop()
{
  Serial.println(String() + "R: " + tcs_read_red() + ", G: " + tcs_read_green() + ", B: " + tcs_read_blue());
}