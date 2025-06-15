#ifndef DESKTOPDIRECTOR_H
#define DESKTOPDIRECTOR_H

#include "desktop_builder.h"

class DesktopDirector{
private:
    DesktopBuilder* desktopBuilder;
public:
    DesktopDirector(DesktopBuilder* pDesktopBuilder){
        desktopBuilder = pDesktopBuilder;
    }
    Desktop* getDesktop(){
        return desktopBuilder->getDesktop();
    }
    Desktop* BuildDesktop(){
        desktopBuilder->buildMoniter();
        desktopBuilder->buildKeyBoard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildSpeaker();
        desktopBuilder->buildRam();
        desktopBuilder->buildProcessor();
        desktopBuilder->buildMotherBoard();
        return desktopBuilder->getDesktop();
    }
};

#endif