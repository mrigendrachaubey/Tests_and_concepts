//no forward declaration is needed as both classes are in same file
//here entire class is a friend of another class
#include <iostream>

using namespace std;



class sis_company{
private:
	int sales;
	int num_of_employees;
public:
	sis_company():sales(2), num_of_employees(50)
	{
		cout << "Sis Default construct "<< endl;
	}

friend class nvidia;//allowing nvidia class to access private members
};

class nvidia{
private:
	int sales;
	int num_of_employees;
public:
	nvidia():sales(10), num_of_employees(2000)
	{
		cout << "Default constructor for Nvidia"<< endl;
	}
	
	void show_sis(sis_company& data)
	{
		cout <<"Sis company data " << data.sales <<" "<< data.num_of_employees << endl;
	}
};

int main(void)
{
	class nvidia alice;//
	class sis_company bob;

	alice.show_sis(bob);//here an object of class nvidia is able to get data from another class
	return 0;
}
