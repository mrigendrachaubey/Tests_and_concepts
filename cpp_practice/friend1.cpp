#include <iostream>

using namespace std;

class adam {
private:
    int a;
public:
    adam() { a=43; }
    friend class bob;     // Friend Class bob
};
 
class bob {
private:
    int b;
public:
    void showadam(adam& x) {
        // Since bob is friend of adam, it can access
        // private members of adam
        cout << "adam private member a=" << x.a << endl;
    }
};
 
int main() {
   adam x;
   bob y;
   y.showadam(x);
   return 0;
}
