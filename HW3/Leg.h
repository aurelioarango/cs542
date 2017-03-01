//class Leg
#ifndef LEG_H
#define LEG_H
#include <iostream>
using namespace std;
//class Leg
class Leg
{
  public:
    //constructor
    Leg()
    {
      cout <<"Make Leg."<<endl;
    }
    //function for action
    virtual void action()=0;
};

#endif
