#pragma once

#ifndef miniLED_H
#define miniLED_H

#include "configs.h"
#include "settings.h"

#include <Arduino.h>

#define MINI_LED_PIN 15

extern Settings settings_obj;

class miniLED {

    public:
        void RunSetup();
        void main();
        void attackLED();
        void sniffLED();
        void offLED();
};

#endif  /* miniLED_H */