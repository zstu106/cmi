/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    WhiteBreathLightTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/02
 * @brief   Description: this file is sample code for RGB LED, It used for white breathing light
 *
 * Function List:
 * 1. bool MeRGBLed::setColor(uint8_t index, uint8_t red, uint8_t green, uint8_t blue) 
 * 2. void MeRGBLed::show()
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Mark Yan     2015/09/02    1.0.0          rebuild the old lib
 * </pre>
 */

#include "MeMCore.h"

MeRGBLed led1(PORT_3, SLOT1, 15);   /* parameter description: port, slot, led number */
MeRGBLed led2(PORT_3, SLOT2, 15);
MeRGBLed led(PORT_3);

int16_t bri = 0, st = 0;

void setup()
{

}

void loop()
{
    led2.setColorAt(0, 10, 0, 0);
    led2.setColorAt(1, 0, 100, 0);
    delay(200);
    led2.show();
    led2.setColorAt(2, 0, 0, 100);
    led2.setColorAt(3, 100, 0, 0);
    delay(200);
    led2.show();
    led1.setColorAt(2, 0, 0, 200);
    led1.setColorAt(3, 0, 0, 200);
  
  led1.show();
  led2.show();
  delay(2000);
 led.setColor(2,200,0,0);
  led.setColor(1,0,200,0);
  led.show();
  delay(200);
  led.setColor(2,200,0,0);
  led.setColor(1,0,200,0);
  led.show();
  delay(2000);

  
}
