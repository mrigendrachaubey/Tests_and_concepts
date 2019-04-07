//here ++ is mirrored by *

#include <iostream>

using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(5){}

       void operator ++() 
       { 
          count = count*2; 
       }
       void Display() 
	{ 
		cout<<"Count: "<<count<<endl; 
	}
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;    
    t.Display();
    return 0;
}
