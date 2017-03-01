#include "CAMealFactory.h"
#include "NYMealFactory.h"

using namespace std;

int main()
{
	CAMealFactory factory1;
	NYMealFactory factory2;
	Cheese* cheese[2];
	Fruit* fruit[2];

	cheese[0] = factory1.makeCheese("swiss");
	fruit[0] = factory1.makeFruit("banana");
	cheese[1] = factory2.makeCheese("cheddar");
	fruit[1] = factory2.makeFruit("apple");

	cheese[0]->taste();
	fruit[0]->taste();
	cheese[1]->taste();
	fruit[1]->taste();
	return 0;
}