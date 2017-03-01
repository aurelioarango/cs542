//Animalbody class
#ifndef ANIMALBODY_H
#define ANIMALBODY_H
#include "Body.h"
//animal body class
class AnimalBody: public Body
{
public:
  //animal body constructor
  AnimalBody()
  {
    cout<<"Make Animal Body."<<endl;
  }
  //implemented action function
  void action()
  {
    cout << "Animal Moves Body"<<endl;
  }
};

#endif
