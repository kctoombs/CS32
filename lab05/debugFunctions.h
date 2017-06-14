#ifndef DEBUGFUNCTIONS_H
#define DEBUGFUNCTIONS_H
#include <string>

class DebugClass
{
  public:
  DebugClass(std::string debugStr, int debugInt) :
    debugStr(debugStr), debugInt(debugInt) {};
  private:
  std::string debugStr;
  int debugInt;
};

void debugFunction1(std::string a);
void debugFunction2(DebugClass a);
void watchPointTest(int idx, int value, int a);
void segFunction(int idx, int value);
void dataLost(int alloc,bool free);
int uninitialized(int idx);
void badFree();
void badAlloc();

extern int watchdata[1024];
extern int watchsomevalue;

#endif
