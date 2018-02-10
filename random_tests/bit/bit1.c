#include <stdio.h>

int main()
{
int pos = 0xFFFF;
int neg = -0xFFFF;

printf("%d %d\n", pos >> 1, neg >> 1);
return 0;
}
