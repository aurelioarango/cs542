#ifndef DOG_H_
#define DOG_H_
//including Interface Animal
#include "IAnimal.h"
class Dog : public Animal
{
    public:
    //Contructor
    Dog();
    //Destructor
    ~Dog();
    //Need to implement Speak function for Dog
    void Speak();

};
#endif
