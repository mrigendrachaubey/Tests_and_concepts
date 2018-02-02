#include <iostream>

using namespace std;

class construct
{
public:
	int a;
	int b;
	
};

int main()
{
	construct obj;
	cout << "a : " << obj.a << " b : " << obj.b << endl;
	return 0;

}
//used default constructor that g++ compiler add by default
//got variables initialized to garbage values
