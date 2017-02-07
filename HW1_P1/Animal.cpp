#include "Animal.h"
#include <iostream>

Animal::Animal()
{
  cout<<"Creating Animal"<<endl;
}
Animal::~Animal()
{
  cout<<"Destroying Animal"<<endl;
}
void Animal::Speak()
{
  cout <<"Speaking"<<endl;
}
void Animal::Jump()
{
  cout <<"Jumping"<<endl;
}
