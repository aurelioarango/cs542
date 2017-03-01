//Aurelio Arango
//cs542

#include "RobotToyFactory.h"
#include "AnimalToyFactory.h"

int main()
{
  //creating robot factory
  RobotToyFactory robot_toy_factory;
  //creating animal factory
  AnimalToyFactory animal_toy_factory;
  //creating parts
  Arm * arm[2];
  Leg * leg[2];
  Body * body[2];
  Head * head[2];
  //making robot parts
  cout <<"\nMaking Robot Toy"<<endl<<endl;
  arm[0] = robot_toy_factory.make_arm();
  leg[0] = robot_toy_factory.make_leg();
  body[0] = robot_toy_factory.make_body();
  head[0] = robot_toy_factory.make_head();
  //maing animal parts
  cout <<"\nMaking Animal Toy"<<endl<<endl;
  arm[1] = animal_toy_factory.make_arm();
  leg[1] = animal_toy_factory.make_leg();
  body[1] = animal_toy_factory.make_body();
  head[1] = animal_toy_factory.make_head();
  //displaying actions
  cout <<endl;
  for(int i=0; i<2; i++)
  {
    arm[i]->action();
    leg[i]->action();
    body[i]->action();
    head[i]->action();
  }
  //deleting objects
  for(int i=0; i<2; i++)
  {
    delete arm[i];
    delete leg[i];
    delete body[i];
    delete head[i];
  }

  return 0;
}
