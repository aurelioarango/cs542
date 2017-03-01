//class animal leg
#ifndef ANIMALLEG_H
#define ANIMALLEG_H
#include "Leg.h"
//animal leg implementation
class AnimalLeg: public Leg
{
  public:
    //constructor
    AnimalLeg()
    {
      cout <<"Make Animal Leg."<<endl;
    }
    //animal leg action function
    void action()
    {
      cout <<"Animal Moves Leg"<<endl;
    }
};

#endif
