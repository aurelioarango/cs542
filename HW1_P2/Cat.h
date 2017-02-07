#ifndef CAT_H_
#define CAT_H_

#include "IAnimal.h"
#include <iostream>

using namespace std;

class Cat : public Animal
{
  public:
    Cat();
    ~Cat();

    void Speak();
    //void Jump();
};
#endif
