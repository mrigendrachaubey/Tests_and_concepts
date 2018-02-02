//enter a string only in number two digits
//change it into a number
#include <stdio.h>

int main()
{
	char *c = "12";
	int msb=0, lsb=0, num=0;
	msb = c[0] - 48;
	lsb = c[1] - 48;
	printf("%d %d\n", msb, lsb);
	num = msb*10+lsb;
	printf("%d\n", num);
	return 0;
}
