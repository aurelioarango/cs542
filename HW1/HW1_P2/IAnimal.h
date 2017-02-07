/***
* Aurelio Arango
* CS 542
* Interface Animal Class
***/
#ifndef IANIMAL_H_
#define IANIMAL_H_
//iostream needed for cout
#include <iostream>
using namespace std;
//Abstract animal class
class Animal
{
    public:
    //pure virtual function
    virtual void Speak()=0;
};
#endif
