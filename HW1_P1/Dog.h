#ifndef DOG_H_
#define DOG_H_

#include "Animal.h"
class Dog : public Animal
{
  public:
  Dog();
  ~Dog();

  void Speak();
  void Jump();
};
#endif
