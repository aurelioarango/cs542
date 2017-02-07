#include "Dog.h"
//Dog constructor, displays Creating Dog when instantiated
Dog::Dog()
{
  cout<<"Creating Dog"<<endl;
}
//Dog destructor, displays Deleting when Destroying Dog
Dog::~Dog()
{
  cout<<"Destroying Dog"<<endl;
}
//Speak function, Displays bow wow
void Dog::Speak()
{
  cout<<"Bow wow"<<endl;
}
//Jump function, displays Dog boing
void Dog::Jump()
{
  cout<<"dog boing"<<endl;
}
