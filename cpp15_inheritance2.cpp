//inheritance
//base class and derived class
//base class can access protected members not private of base class
//class DerivedClass : public BaseClass{};
//protected/public members of base class are accessed in context of derived class.
#include <iostream>
#include "h_cpp1.h"

using namespace std;

void shape::setwidth(int w)
{
//protected members
	width = w;
}

void shape::setheight(int h)
{
//protected members
	height = h;
}

int rectangle::getarea()
{
	return width*height;
}

int main()
{
	rectangle rect;
	rect.setwidth(10);
	rect.setheight(14);
	cout << "area : " << rect.getarea() << endl;
	return 0;
}
//If I make protected members as private this error comes
/*
In file included from cpp15_inheritance2.cpp:6:0:
h_cpp1.h: In member function ‘int rectangle::getarea()’:
h_cpp1.h:5:7: error: ‘int shape::width’ is private
   int width;
       ^
cpp15_inheritance2.cpp:22:9: error: within this context
  return width*height;
         ^
In file included from cpp15_inheritance2.cpp:6:0:
h_cpp1.h:6:7: error: ‘int shape::height’ is private
   int height;
       ^
cpp15_inheritance2.cpp:22:15: error: within this context
  return width*height;
               ^
 * */
