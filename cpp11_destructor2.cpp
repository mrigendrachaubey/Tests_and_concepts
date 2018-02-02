//destructor usage with delete
#include <iostream>

using namespace std;

class string
{
	private :
		char *s;
		int size;
	public:
		string(char *c)
		{
			size = strlen(c);
			s = new char[size+1];
			strcpy(s, c);
		}
		~string()
		{
			delete []s;
		}
};


