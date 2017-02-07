
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>
using namespace std;
class Animal
{
  public:
    Animal();
    ~Animal();
    virtual void Speak();
    void Jump();

};
#endif
