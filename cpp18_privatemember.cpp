//Test program to see how private members are used.
#include <iostream>
#include "h_cpp4.h"

using namespace std;

double construct :: area(double r)
{
//now using the private member for calculation. Assigning the value here.
	radius = r;
	return 3.14 * radius * radius;
}

int main()
{
	construct circ;
	cout << "area :" << circ.area(4.0) << endl;
	return 0;
}
