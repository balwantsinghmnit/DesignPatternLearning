#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include "desktop_builder.h"

class DellDesktopBuilder:public DesktopBuilder{
    void buildMoniter();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif