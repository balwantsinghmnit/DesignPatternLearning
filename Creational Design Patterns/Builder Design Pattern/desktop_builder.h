#ifndef DESKTOPBUILDER_H
#define DESKTOPBUILDER_H

#include "desktop.h"

class DesktopBuilder{
protected:
    Desktop* desktop;
public:
    DesktopBuilder(){
        desktop = new Desktop();
    }
    virtual void buildMoniter() = 0;
    virtual void buildKeyBoard() = 0;
    virtual void buildMouse() = 0;
    virtual void buildSpeaker() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildMotherBoard() = 0;
    virtual Desktop* getDesktop(){
        return desktop;
    }
};

#endif