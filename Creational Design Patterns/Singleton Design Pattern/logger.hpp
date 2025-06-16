#ifndef logger.h
#define logger.h

#include<string>
#include<mutex>
using namespace std;

class Logger{
    static int ctr;
    static mutex mtx;
    static Logger* logger_instance;
    Logger();
    public:
        static Logger* getLogger();
        void Log(string msg);
};

#endif