//Robot body class
#ifndef ROBOTBODY_H
#define ROBOTBODY_H
#include "Body.h"
//Robot body class implementation
class RobotBody: public Body
{
public:
  //Constructor
  RobotBody()
  {
    cout<<"Make Robot Body."<<endl;
  }
  //robot body action function
  void action()
  {
    cout << "Robot Moves Body"<<endl;
  }
};

#endif
