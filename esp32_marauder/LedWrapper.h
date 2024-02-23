#pragma once

#ifndef LedWrapper_H
#define LedWrapper_H

#include "configs.h"


class LedWrapper {

    public:
        void RunSetup();
        void main();
        void attackLED();
        void sniffLED();
        void offLED();
};


#endif  /* LedWrapper_H */