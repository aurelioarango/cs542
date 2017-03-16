//HW 5 Composite
//Aurelio Arango
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//base Component class
class Component
{
  public:
    virtual void traverse()=0;
};
//Composite class that is use for all the other classes
class Composite: public Component
{
  vector <Component *> children;
  string value;
  public:
    //constructor
    Composite(string val)
    {
      value = val;
    }
    //add a new child to the array
    void add(Component * c)
    {
      children.push_back(c);
    }
    //traverse all children
    void traverse()
    {
      //displaying value of the class and displays childrens value
      cout <<  value << " "<<endl;
      for(int i=0; i< children.size(); i++)
      {
        children[i]->traverse();
      }
    }
};

//base LegoBrick1X1 class
class LegoBrick1X1: public Composite
{
  public:
    LegoBrick1X1(string val):Composite(val)
    {
        color = val;
    }
    void traverse()
    {
        cout << "A " << color << " Lego 1X1 brick" << endl;
        Composite::traverse();
    }
    string color;
};
//base class LegoBrick1X2
class LegoBrick1X2 : public Composite
{
  public:
    LegoBrick1X2(string val):Composite(val)
    {
        color = val;
    }
    void traverse()
    {
        cout << "A " << color << " Lego 1X2 brick" << endl;
        Composite::traverse();
    }
    string color;
};
//base class LegoBrick2X2
class LegoBrick2X2 : public Composite
{
  public:
    LegoBrick2X2(string val):Composite(val)
    {
        color = val;
    }
    void traverse()
    {
        cout << "A " << color << " Lego 2X2 brick" << endl;
        Composite::traverse();
    }
    string color;
};
//base class LegoFigure
class LegoFigure : public Composite
{
  public:
    LegoFigure(string val):Composite(val)
    {
        occupation = val;
    }
    void traverse()
    {
        cout << "A " << occupation << " Lego figure." << endl;
        Composite::traverse();
    }
    string occupation;
};
//base class LegoProduct
class LegoProduct : public Composite
{
  public:
    LegoProduct(string val): Composite(val)
    {
        name = val;
    }
    void traverse()
    {
      cout << "A Lego " << name << " that contains: " << endl;
      Composite::traverse();
    }
    string name;

};

/*
class LegoProduct : public Composite
{
  public:
    LegoProduct(string val):Composite(val)
    {
        name = val;
    }
    void add(LegoBrick1X1 *c)
    {
        array1.push_back(c);
    }
    void add(LegoBrick1X2 *c)
    {
        array2.push_back(c);
    }
    void add(LegoBrick2X2 *c)
    {
        array3.push_back(c);
    }
    void add(LegoFigure *c)
    {
        array4.push_back(c);
    }
    void add(LegoProduct *c)
    {
        array5.push_back(c);
    }
    void play()
    {
        cout << "A Lego " << name << " that contains: " << endl;
        for (int i = 0; i < array1.size(); i++)
          array1[i]->play();
        for (int i = 0; i < array2.size(); i++)
          array2[i]->play();
        for (int i = 0; i < array3.size(); i++)
          array3[i]->play();
        for (int i = 0; i < array4.size(); i++)
          array4[i]->play();
        for (int i = 0; i < array5.size(); i++)
          array5[i]->play();
    }
    vector<LegoBrick1X1*> array1;
    vector<LegoBrick1X2*> array2;
    vector<LegoBrick2X2*> array3;
    vector<LegoFigure*> array4;
    vector<LegoProduct*> array5;
    string name;
};
*/
int main()
{
  //creagting lego brick colors
  LegoBrick1X1 brick1("red");
  LegoBrick1X2 brick2("yellow");
  LegoBrick2X2 brick3("blue");
  LegoBrick2X2 brick4("green");
  //creating figures
  LegoFigure figure1("prince");
  LegoFigure figure2("princess");
  LegoFigure figure3("knight");
  //creating products
  LegoProduct product1("castle");
  LegoProduct product2("kindom");

  product1.add(&brick1);
  product1.add(&brick2);
  product1.add(&brick3);
  product1.add(&brick4);

  product2.add(&figure1);
  product2.add(&figure2);
  product2.add(&figure3);
  product2.add(&product1);
  product2.traverse();

  return 1;
}
