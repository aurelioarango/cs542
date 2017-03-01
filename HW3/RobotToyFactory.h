//Robot Toy Factory class
#ifndef ROBOTTOYFACTORY_H
#define ROBOTTOYFACTORY_H
#include "ToyFactory.h"

//Robot Toy Factory implementation
class RobotToyFactory: public ToyFactory
{
public:
  //Robot toy Factory
  RobotToyFactory()
  {
    	cout << "Welcome to the Robot toy factory!" << endl;
  }
  public:
    //implementation of toy parts
  Leg* make_leg();
  Arm* make_arm();
  Body* make_body();
  Head* make_head();
};
//return new Robot leg
Leg* RobotToyFactory::make_leg()
{
  Leg * leg;
  leg = new RobotLeg();
  return leg;
}
//REturn new robot arm
Arm* RobotToyFactory::make_arm()
{
  Arm * arm;
  arm = new RobotArm();
  return arm;
}
//Return new robot body
Body* RobotToyFactory::make_body()
{
  Body * body;
  body = new RobotBody();
  return body;
}
//return new robot head
Head* RobotToyFactory::make_head()
{
  Head * head;
  head = new RobotHead();
  return head;
}
#endif
