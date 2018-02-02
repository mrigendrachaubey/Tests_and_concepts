#include <iostream>
#include "h_cpp.h"

using namespace std;

construct::construct(void) 
{
   cout << "Object is being created" << endl;
}

construct::~construct(void) 
{
   cout << "Object is being deleted" << endl;
}
void construct::setlength(int l)
{
	length = l;
}

int construct::getlength()
{
	return length;
}

int main()
{
	construct obj;
	obj.setlength(12);
	cout << "length "<< obj.getlength()<<endl;
	return 0;

}
