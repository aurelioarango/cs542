//Body
#ifndef BODY_H
#define BODY_H
#include <iostream>
using namespace std;
//class Body
class Body
{
public:
  //constructor
  Body()
  {
    cout<<"Make Body."<<endl;
  }
  //action function
  virtual void action()=0;
};

#endif
