/**this is the same case as returning_a_pointer_to_a_local_variable1 because we are returning a local pointer
**/
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
    printf("sds\n");
    printf("%d\n", *p);
    return 0;
}
