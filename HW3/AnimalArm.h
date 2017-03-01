//class animal arm
#ifndef ANIMALARM_H
#define ANIMALARM_H
#include "Arm.h"
//class Animal Arm
class AnimalArm: public Arm
{
  public:
    //constructor
    AnimalArm(){
      cout <<"Make Animal Arm."<<endl;
    }
    //action function implemented
    void action(){
      cout << "Animal Moves Arm"<<endl;
    }
};

#endif
