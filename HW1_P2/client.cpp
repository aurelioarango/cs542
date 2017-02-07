//Aurelio Arango client.cpp
//including Cat.h class
#include "Cat.h"
//including Dog.h class
#include "Dog.h"
using namespace std;
//main function to run program
int main()
{
  //creating array pointer of animals
  Animal* animals[3];
  //assigning new dog to animals at 0
  animals[0]= new Dog;
  //assigning new cat to animals at 1
  animals[1]= new Cat;
  //assigning new Dot to animals at 2
  animals[2]= new Dog;
  //for loop to iterate through the array of animals
  for(int i=0; i<3; i++)
  {
    //calling for the Speak function
    animals[i]->Speak();
  }

  return 0;
}
