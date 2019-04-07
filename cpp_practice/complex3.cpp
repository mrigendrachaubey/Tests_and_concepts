//realPart(0.0), complexPart(0.0)
#include "std_lib_facilities.h"

class ComplexNumber
{
private:
	float realPart;
	float complexPart;
public:
	ComplexNumber():realPart(0.0), complexPart(0.0)
	{
		realPart = 0.0;//this is reassignment, not fresh construction!
		complexPart = 0.0;
		cout<<"No arg constructor called"<<endl;//our constructor initialise member variables
	}
	~ComplexNumber()
	{
		
		cout<<"destructor called"<<endl;//our constructor initialise member variables
	}
	void setMemberVariables(double r, double c)
	{	
		realPart = r;
		complexPart = c;
	}
	float getRealPart()
	{
		return realPart;
	}
	float getComplexPart()
	{
		return complexPart;
	}
	void print()
	{
		cout <<"real = "<<realPart<<" complex = "<<complexPart;
	}
};

int main()
{
	ComplexNumber c;
	cout <<"Hello there" << endl;
	c.print();
	cout<<endl;
	c.setMemberVariables(3.14, 5.3);
	cout<<endl;
	c.print();
	cout << "done"<<endl;
	return 0;

}
