//Robot head class
#ifndef ROBOTHEAD_H
#define ROBOTHEAD_H
#include "Head.h"
//Robot head class implementation
class RobotHead: public Head
{
public:
  //Robot head constructor
  RobotHead()
  {
    cout<<"Make Robot Head."<<endl;
  }
  //Robot head action
  void action()
  {
    cout<<"Robot Moves Head."<<endl;
  }
};

#endif
