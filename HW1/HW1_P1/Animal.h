/* Aurelio Arango Animal Class
*/
#ifndef ANIMAL_H_
#define ANIMAL_H_
//including io stream for cout
#include <iostream>
//standard library
using namespace std;
//create animal class
class Animal
{
  public:
    //Animal constructor
    Animal();
    //Animal destructor
    virtual ~Animal();
    //virtual function Speak
    virtual void Speak();
    //jump function
    void Jump();
};
#endif
