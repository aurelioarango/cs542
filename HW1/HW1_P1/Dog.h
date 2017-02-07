#ifndef DOG_H_
#define DOG_H_
//include parent class
#include "Animal.h"
//Create sub class Dog from Animal
class Dog : public Animal
{
  public:
    //constructor
    Dog();
    //destructor
    ~Dog();
    //Speak function
    void Speak();
    //Jump function
    void Jump();
};
#endif
