#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include "desktop_builder.h"

class HpDesktopBuilder:public DesktopBuilder{
    void buildMoniter();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif