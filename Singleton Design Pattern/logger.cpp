#include<iostream>
#include "logger.hpp"
using namespace std;

int Logger::ctr = 0;
Logger* Logger::logger_instance = nullptr;
mutex Logger::mtx;

Logger::Logger(){
    ctr++;
    cout <<"New Instance Created. No. of instances" <<ctr << endl;
}

void Logger::Log(string msg){
    cout << msg << endl;
}

Logger* Logger::getLogger(){
    if(logger_instance==nullptr){
        mtx.lock();
        if(logger_instance==nullptr){
            logger_instance=new Logger();
        }
        mtx.unlock();
    }
    return logger_instance;
}