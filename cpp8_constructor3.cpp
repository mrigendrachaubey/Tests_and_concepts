//parameterised constructor test 1
#include <iostream>

using namespace std;

class construct 
{
private:
	int a, b;
public:
	construct(int x, int y)
	{
		a = x;
		b = y;	
	}

};

int main()
{
	construct obj(4, 5);
	cout <<"a :"<< obj.a << " b : "<< obj.b << endl;
	return 0;

}

//didn't worked because I tried to access private members
