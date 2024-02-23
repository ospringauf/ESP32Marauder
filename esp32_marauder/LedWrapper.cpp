#include "LedWrapper.h"

#ifdef MARAUDER_FLIPPER
  #include "flipperLED.h"
#elif defined(XIAO_ESP32_S3)
  #include "xiaoLED.h"
#elif defined(MARAUDER_M5STICKC)
  #include "stickcLED.h"
#elif defined(ESP32_S2_MINI)
  #include "miniLED.h"
#else
  #include "LedInterface.h"
#endif



#ifdef MARAUDER_FLIPPER
  flipperLED the_led;
#elif defined(XIAO_ESP32_S3)
  xiaoLED the_led;
#elif defined(MARAUDER_M5STICKC)
  stickcLED the_led;
#elif defined(ESP32_S2_MINI)
  miniLED the_led;
#else
  LedInterface the_led;
#endif

#ifdef HAS_NEOPIXEL_LED
  Adafruit_NeoPixel strip = Adafruit_NeoPixel(Pixels, PIN, NEO_GRB + NEO_KHZ800);
#endif


void LedWrapper::RunSetup()
{
    the_led.RunSetup();
}

void LedWrapper::attackLED()
{
    the_led.attackLED();
}

void LedWrapper::sniffLED()
{
    the_led.sniffLED();
}

void LedWrapper::offLED()
{
    the_led.offLED();
}

void LedWrapper::main()
{
    // do nothing
}