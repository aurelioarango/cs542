//Robot arm class
#ifndef ROBOTARM_H
#define ROBOTARM_H
#include "Arm.h"
//robot class implementation
class RobotArm: public Arm
{
  public:
    //constructor
    RobotArm(){
      cout <<"Make Robot Arm."<<endl;
    }
    //action function
    void action(){
      cout << "Robot Moves Arm"<<endl;
    }

};

#endif
