//#include Cat and Dog class
#include "Cat.h"
#include "Dog.h"
//main function to run program
int main()
{
  //Create Animal pointers
  Animal* animals[3];
  //Creating new Dog
  animals[0]= new Dog;
  //Creating new Cat
  animals[1]= new Cat;
  //Creating new Dog
  animals[2]= new Dog;
  //Call jump and Speak function throught animal array
  for(int i=0; i<3; i++)
  {
    //calling speak function
    animals[i]->Speak();
    //calling jump function
    animals[i]->Jump();
  }

  for(int i=0; i<3; i++)
  {
    //calling destructor
    delete animals[i];
  }
  return 0;
}
