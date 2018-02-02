//basic constructor and destructor
#include <iostream>

using namespace std;

class construct
{
private:
public:
	construct()
	{
		cout << "constructor called" << endl; 
	}

	~construct()
	{
		cout << "destructor called" << endl; 
	}

};

int main()
{
	construct obj;
	return 0;
}
