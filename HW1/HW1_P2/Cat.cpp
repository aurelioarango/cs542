//include cat header class
#include "Cat.h"
//cat constructor
Cat::Cat()
{
  cout<<"Creating Cat"<<endl;
}
//cat deconstructor
Cat::~Cat()
{
  cout<<"Deleting Cat"<<endl;
}
//function speak implmentation
void Cat::Speak()
{
  cout<<"Meow"<<endl;
}
