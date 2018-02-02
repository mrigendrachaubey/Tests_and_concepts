#include <stdio.h>

int *call()
{
    int *a, b;//local pointer and local variable
    b = 43;
    a = &b;
    return a;
}

int main(void)
{
    int *p;
    p = call();
  //  printf("sds\n");
    printf("%d\n", *p);
    return 0;
}
