//create a class to hold a real and imaginaty part of complex number
//writing a initialization constructor

#include <iostream>
using namespace std;

class ComplexNumber
{
	private:
		float realpart;
		float complexpart;
	public:
		ComplexNumber() : realpart(0.0), complexpart(0.0)//this is called an initialization list. By the time this constructor is called member variables exists.
		{
			cout <<"No arg-constructor called" <<endl;
		}
		void setMemberVariables(double r, double c)
		{
			realpart=r;
			complexpart=c;
		}
		float getRealPart()
		{
			return realpart;
		}
		float getComplexPart()
		{
			return complexpart;
		}
		void print()
		{
			cout <<"real ="<< realpart <<" complex=" << complexpart << endl;
		}

};//class done

int main()
{
	ComplexNumber c;//instantiating a class, cpp calls constructor when this line is executed
	cout << "Hello there" << endl; 
	c.print();//random values printed
	cout << endl;
	c.setMemberVariables(3.14, 5.3);
	cout<<endl;
	c.print();
	cout <<"Okay all done!"<<endl;

}


