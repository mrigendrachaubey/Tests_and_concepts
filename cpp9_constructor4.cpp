#include <iostream>

using namespace std;

class construct
{
private:
	int a, b;
public:
	//parameterised constructor
	construct (int x, int y)
	{
		a = x;
		b = y;
	}
	//getter
	int getA()
	{
		return a;
	}
	//setter
	int setB()
	{
		return b;
	}
	
	
};

int main()
{
	construct obj(4, 5);
	cout << "a : " << obj.getA() << " b :" << obj.setB() <<endl;
	return 0; 

}
//in parametrised constructor we need to create two more functions
//getter and setter and return.
