//usage of new and delete
#include <iostream>

using namespace std;

int main()
{
	float *dynfloat = new float(33.3);
	cout << *dynfloat << endl;
	delete(dynfloat);
	return 0;
}



