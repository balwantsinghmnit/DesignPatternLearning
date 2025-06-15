#ifndef DESKTOP_H
#define DESKTOP_H

#include<string>
using namespace std;

class Desktop{
    string moniter;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherBoard;
public:
    void setMoniter(string pMoniter);
    void setKeyBoard(string pKeyBoard);
    void setMouse(string pMouse);
    void setSpeaker(string pSpeaker);
    void setRam(string pRam);
    void setProcessor(string pProcessor);
    void setMotherBoard(string pMotherBoard);
    void showSpecs();
};

#endif