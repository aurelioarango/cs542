/*
* Animal Interface
*/
#ifndef CAT_H_
#define CAT_H_

#include "IAnimal.h"
//stream out library
#include <iostream>
//standard library
using namespace std;

class Cat : public Animal
{
  public:
    //cat constructor
    Cat();
    //Cat Deconstructor
    ~Cat();
    //implmentation of virtual function from Animal Interface
    void Speak();
};
#endif
