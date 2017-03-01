//Head class
#ifndef HEAD_H
#define HEAD_H
#include <iostream>
using namespace std;
//class head
class Head
{
public:
  //constructor
  Head()
  {
    cout<<"Make Head."<<endl;
  }
  //action function
  virtual void action()=0;
};

#endif
