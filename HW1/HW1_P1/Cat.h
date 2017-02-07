#ifndef CAT_H_
#define CAT_H_
//Including Parent class Animal
#include "Animal.h"

//Creating animal class
class Cat : public Animal
{
  public:
    //cat constructor
    Cat();
    //cat destructor
    ~Cat();
    //Speak function
    void Speak();
    //Jump function
    void Jump();
};
#endif
