//first constructor test program
#include <iostream>

using namespace std;

class construct
{
public :
	int a, b;
	construct()
	{
		a = 30;
		b = 50;
	}
};

int main()
{
	construct obj;
	cout << "a : " << obj.a << ", b : " << obj.b << endl;
	return 0;
}
//declared a default constructor function, name same as the class.
