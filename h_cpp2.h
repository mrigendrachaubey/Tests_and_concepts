//h_cpp2.h
#include <cstring>

class person
{
    public:
        std::string name;
        int age;
        person(void);
	~person(void);
        void display();
};

class footballer:public person
{
    public:
        void playfootball();
        
};

class mathsteacher:public person
{
    public:
        void teachmaths();
};
