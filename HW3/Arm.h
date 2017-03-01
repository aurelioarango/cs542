//Arm
#ifndef ARM_H
#define ARM_H
#include <iostream>
using namespace std;
//Creating class
class Arm
{
  public:
    //constructor
    Arm(){
      cout <<"Make Arm."<<endl;
    }
    //action function
    virtual void action()=0;

};

#endif
