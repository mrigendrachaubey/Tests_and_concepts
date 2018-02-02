//same name of the function p_print but differentiated via arguments
#include <iostream>

using namespace std;

class construct 
{
public:
	void p_print();
	void p_print(int );
	void p_print(int , float );
};

void construct :: p_print()
{
	cout << "No args" << endl;
}

void construct :: p_print(int a)
{
	cout << "arg1 :" << a << endl;
}

void construct :: p_print(int a, float b)
{
	cout << "arg1 :" << a << ", arg2 :" << b << endl;
}

int main()
{
	construct obj;
	obj.p_print();
	obj.p_print(14);
	obj.p_print(16, 3.14);
	return 0;
}
