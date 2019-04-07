#include <iostream>

using namespace std;

class ComplexNumber
{
private:
	float realPart;
	float imaginaryPart;
public:
	ComplexNumber (): realPart(0.0), imaginaryPart(0.0)
	{
		cout << "constructor called"<<endl;
	}

	ComplexNumber(float r, float i)
	{
		realPart = r;
		imaginaryPart = i;
	}
	~ComplexNumber()
	{
		cout << "Inside the destructor: realPart = " << realPart <<" complexPart = " << imaginaryPart << endl; 
	}

	void print()
	{
		cout <<realPart<<" "<<imaginaryPart<<endl;
	}
};

int main()
{
	int i;
	ComplexNumber * cDynamic = new ComplexNumber[10];
	for(i = 0; i < 10; i++)
	cDynamic[i].print();
	//cout <<realPart<<" "<<imaginaryPart<<endl;//here scope is not correct as these are private members
	delete[] cDynamic;
	return 0;
}
