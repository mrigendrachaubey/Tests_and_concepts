//example class program
#include <iostream>
#include <cstring>

using namespace std;

class person{
	private:
	public:
		string name;
		int age;
};

int main()
{
	person obj;
	obj.name = "Mrigendra";
	obj.age = 28;
	cout << "person name:" << obj.name << endl;
	cout << "person age:" << obj.age << endl;

	person nobj;
	cout << "Enter name:" << endl;
	cin >> nobj.name;
	cout << "Enter age" << endl;
	cin >> nobj.age;
	cout << endl << nobj.name << ", " << nobj.age << endl;
	return 0;
}
//I can create two objects at different places
//Understand how input output cin and cout works
