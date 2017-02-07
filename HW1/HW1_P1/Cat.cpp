#include "Cat.h"
//Cat constructor displays Creating Cat
Cat::Cat()
{
  cout<<"Creating Cat"<<endl;
}
//Cat Deconstructor displays Deleting Cat when Cat is deleted
Cat::~Cat()
{
  cout<<"Deleting Cat"<<endl;
}
//Implementation Speak, displays Meow
void Cat::Speak()
{
  cout<<"Meow"<<endl;
}
//Implementation Jump, Displays cat boing
void Cat::Jump()
{
  cout <<"cat boing"<<endl;
}
