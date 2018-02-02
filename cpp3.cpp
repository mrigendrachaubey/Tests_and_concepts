//constructor and destructor
//use cstring in ubuntu otherwise string functions will complain about scope
//
#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
	char *studentname;
public:
	Student(const char *name)
	{
		cout << "passed string:"  << name << endl;
		studentname = new char[50];
		strcpy(studentname, name);
		cout << "constructed string to" << studentname << endl;
	}

	~Student()	
	{
		cout << "destructor called " << studentname << endl;
		delete[] studentname;
	}

	void print()
	{
		cout <<"student name:" << studentname << endl;
	}

};

int main()
{
	const char name[50] = "Mrigendra";
	Student student(name);
	student.print();
	cout << "Done" << endl;
	return 0;

}


