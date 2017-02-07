#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
  cout<<"Creating Cat"<<endl;
}
Cat::~Cat()
{
  cout<<"Deleting Cat"<<endl;
}
void Cat::Speak()
{
  cout<<"Meow"<<endl;
}
void Cat::Jump()
{
  cout <<"cat boing"<<endl;
}
