//5 6 7 A 1
//3 6 10 B 
#include <stdio.h>

int main()
{
    char temp;
    int alc[3]={0}, bob[3]={0}, i=0, a, b;

    //enter alice 
    do 
    {
        scanf("%d%c", &alc[i], &temp);
        i++;
    } while(temp != '\n');

    i=0;

    //enter bob
    do 
    {
        scanf("%d%c", &bob[i], &temp);
        i++;
    } while(temp != '\n');

    for(i = 0; i < 3 ; i++)
    {
        if(alc[i] > bob[i])
               a++;
        else if(alc[i] < bob[i])
            b++;
        else
            ;
    }
    printf("%d %d", a, b);
    return 0;    
}
