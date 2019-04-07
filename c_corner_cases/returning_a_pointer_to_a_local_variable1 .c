#include <stdio.h>

int *func()
{
int a=45;//local variable
return &a;//returning the address
}

int main(void)
{
int *b, c;
b = func();//once that function completes, stack of that function should die.once the stack dies, all of the values will be garbage.
printf("hello");//once I use a statement here the value corrupts
printf("%d\n", *b);//this works here if I don't use above print, but it is an undefined behaviour
return 0;
}
