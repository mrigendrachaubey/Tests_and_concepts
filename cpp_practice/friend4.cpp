//no forward declaration is needed as both classes are in same file
//here entire class is a friend of another class
//we declared friend function in two classes and later access the private members of both.
#include <iostream>

using namespace std;

class partnerB;

class partnerA{
private:
	int Aa;
	int Ab;
public:
	partnerA():Aa(2), Ab(4)
	{
		cout << "A constructor"<<endl;
	}
friend void info(partnerB& x, partnerA& y);//this function says its a friend of class partnerB so it can access its private members

};


class partnerB{
private:
	int Ba;
	int Bb;
public:
	partnerB():Ba(5), Bb(6)
	{
		cout << "B constructor"<<endl;
	}

friend void info(partnerB& x, partnerA& y);//this function says its a friend of class partnerB so it can access its private members

};

void info(partnerB& x, partnerA& y)
{
	cout << x.Ba + y.Aa << " " << x.Bb + y.Ab << endl;
}

int main(void)
{
	partnerA s;
	partnerB t;
	info(t, s);
	return 0;
}

