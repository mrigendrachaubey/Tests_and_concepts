#include <stdio.h>

int main()
{
	int myint = -30;//32 bit negative value in decimal will be 0xFFFFFFE2.
	int myint2 = 0xFFFFFFE2;//32 bit negative value in hex.
	printf("%hhX %d\n", myint, myint2);//both are same
	return 0;
}
