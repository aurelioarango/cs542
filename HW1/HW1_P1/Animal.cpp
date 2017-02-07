#include "Animal.h"
//Animal constructor
//Display Creating ANIMAL_H_
Animal::Animal()
{
  cout<<"Creating Animal"<<endl;
}
//Animal destructor and displays Destroying Animal
Animal::~Animal()
{
  cout<<"Destroying Animal"<<endl;
}
//void function Speaking display Speaking
void Animal::Speak()
{
  cout <<"Speaking"<<endl;
}
//Jumping function; displays Jumping
void Animal::Jump()
{
  cout <<"Jumping"<<endl;
}
