#include <stdio.h>
#include <stdlib.h>

void function(int *a)
{
    a=(int *)malloc(sizeof(int));
    *a=10;
}
int main()
{
    int *num;
    function(num);
    printf("%d",*num);
    return(0);
}
