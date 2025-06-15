#include<iostream>
#include "desktop.h"

void Desktop::setMoniter(string pMoniter){
    moniter = pMoniter;
}
void Desktop::setKeyBoard(string pKeyBoard){
    keyboard = pKeyBoard;
}
void Desktop::setMouse(string pMouse){
    mouse = pMouse;
}
void Desktop::setSpeaker(string pSpeaker){
    speaker = pSpeaker;
}
void Desktop::setRam(string pRam){
    ram = pRam;
}
void Desktop::setProcessor(string pProcessor){
    processor = pProcessor;
}
void Desktop::setMotherBoard(string pMotherBoard){
    motherBoard = pMotherBoard;
}
void Desktop::showSpecs(){
    cout << "--------------------------------------------------" <<endl;
    cout << "Moniter : " << moniter << endl;
    cout << "Keyboard : " << keyboard << endl;
    cout << "Mouse : " << mouse << endl;
    cout << "Speaker : " << speaker << endl;
    cout << "Ram : " << ram << endl;
    cout << "Processor : " << processor << endl;
    cout << "Motherboard : " << motherBoard << endl;
    cout << "--------------------------------------------------" <<endl;
}
