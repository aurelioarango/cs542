#include <iostream>
#include <vector>
using namespace std;

class Component
{
  public:
    virtual void traverse() = 0;
};

class Primitive: public Component
{
    int value;
  public:
    Primitive(int val)
    {
        value = val;
    }
    void traverse()
    {
        cout << value << " ";
    }
};

class Composite: public Component
{
    vector < Component * > children;
    int value;
  public:
    Composite(int val)
    {
        value = val;
    }
    void add(Component *c)
    {
        children.push_back(c);
    }
    void traverse()
    {
        cout << value << "  ";
        for (int i = 0; i < children.size(); i++)
          children[i]->traverse();
    }
};

class School: public Composite
{
  public:
    // Two different kinds of "con-
    School(int val): Composite(val){}
    // tainer" classes.  Most of the
    void traverse()
    {
        // "meat" is in the Composite
        cout << "School"; // base class.
        Composite::traverse();
    }
};

class College: public Composite
{
  public:
    College(int val): Composite(val){}
    void traverse()
    {
        cout << "College";
        Composite::traverse();
    }
};

int main()
{
  School first(1);                      // School1
  College second(2);                    //   |
  College third(3);                     //   +-- College2
  School fourth(4);                     //   |     |
  School fifth(5);                      //   |     +-- 7
  first.add(&second);                   //   +-- College3
  first.add(&third);                    //   |     |
  third.add(&fourth);                   //   |     +-- School4
  third.add(&fifth);                    //   |     |     |
  first.add(new Primitive(6));          //   |     |     +-- 9
  second.add(new Primitive(7));         //   |     +-- School5
  third.add(new Primitive(8));          //   |     |     |
  fourth.add(new Primitive(9));         //   |     |     +-- 10
  fifth.add(new Primitive(10));         //   |     +-- 8
  first.traverse();                     //   +-- 6
  cout << '\n';                 
}
