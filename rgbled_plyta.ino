/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    ColorLoopTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/02
 * @brief   Description: this file is sample code for RGB LED, It used for random color change
 *
 * Function List:
 * 1. bool MeRGBLed::setColorAt(uint8_t index, uint8_t red, uint8_t green, uint8_t blue)
 * 2. void MeRGBLed::show()
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Mark Yan     2015/09/02    1.0.0          rebuild the old lib
 * </pre>
 */
#include "MeOrion.h"

MeRGBLed led(PORT_3);

void setup()
{

}

void loop()
{
  color_loop();
}

void color_loop()
{
  led.setColor(1,200,0,0);
  led.setColor(2,0,200,0);
  led.show();
  delay(200);
  led.setColor(2,200,0,0);
  led.setColor(1,0,200,0);
  led.show();
  delay(200);

  led.setColor(0,0,0,200);
  led.setColor(3,200,0,0);
  led.show();
  delay(200);
  led.setColor(0,0,100,0);
  led.setColor(3,0,100,0);
  led.show();
  delay(200);
 
}
