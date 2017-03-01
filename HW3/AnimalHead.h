//Animal head class
#ifndef ANIMALHEAD_H
#define ANIMALHEAD_H
#include "Head.h"
//class implementation
class AnimalHead : public Head
{
public:
  //animal head constructor
  AnimalHead()
  {
    cout<<"Make Animal Head."<<endl;
  }
  //animal head action function
  void action()
  {
    cout<<"Animal Moves Head."<<endl;
  }
};

#endif
