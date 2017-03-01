//animal toy factory class
#ifndef ANIMALTOYFACTORY_H
#define ANIMALTOYFACTORY_H
#include "ToyFactory.h"
//animal class implementation
class AnimalToyFactory: public ToyFactory
{
public:
  //animal toy factory constructor
  AnimalToyFactory()
  {
      cout << "Welcome to the Animal toy factory!" << endl;
  }
public:
  //creating Toy parts
  Leg* make_leg();
  Arm* make_arm();
  Body* make_body();
  Head* make_head();
};
// creating new leg function
Leg* AnimalToyFactory::make_leg()
{
  Leg * leg;
  leg = new AnimalLeg();
  return leg;
}
// creating new arm function
Arm* AnimalToyFactory::make_arm()
{
  Arm * arm;
  arm = new AnimalArm();
  return arm;
}
//creating new body function
Body* AnimalToyFactory::make_body()
{
  Body * body;
  body = new AnimalBody();
  return body;
}
//creating nea head function
Head* AnimalToyFactory::make_head()
{
  Head * head;
  head = new AnimalHead();
  return head;
}

#endif
