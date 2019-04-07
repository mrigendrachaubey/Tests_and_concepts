//no forward declaration is needed as both classes are in same file
//here entire class is a friend of another class
#include <iostream>

using namespace std;

class Emp{
private:
	int salary;
public:
	Emp():salary(20000)
	{
		cout << "default constructor"<<endl; 	
	}
friend class Boss;
};

class Boss{
private:
	int company_rev;
public:
	void show_Emp(Emp& sal)
	{
		cout << "emp salary " << sal.salary << endl;
	}
	
};
int main()
{
	class Emp alis;
	class Boss bob;
	cout << "standard salary "<<endl;
	bob.show_Emp(alis);
	return 0;
}
