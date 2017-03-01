//Robot Leg class
#ifndef ROBOTLEG_H
#define ROBOTLEG_H
#include "Leg.h"
//Robot Leg class
class RobotLeg: public Leg
{
  public:
    //Robot leg constructor
    RobotLeg()
    {
      cout <<"Make Robot Leg."<<endl;
    }
    //Robot leg action
    void action()
    {
      cout <<"Robot Moves Leg"<<endl;
    }
};

#endif
