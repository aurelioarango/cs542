//Toy Factory class
#ifndef TOYFACTORY_H
#define TOYFACTORY_H
#include "AnimalArm.h"
#include "AnimalBody.h"
#include "AnimalHead.h"
#include "AnimalLeg.h"

#include "RobotArm.h"
#include "RobotLeg.h"
#include "RobotBody.h"
#include "RobotHead.h"

#include <iostream>
using namespace std;
//Abstract class Toy Factory
class ToyFactory
{
public:
  //Virtual functions for making toy parts
  virtual Leg* make_leg()=0;
  virtual Arm* make_arm()=0;
  virtual Body* make_body()=0;
  virtual Head* make_head()=0;
};
#endif
