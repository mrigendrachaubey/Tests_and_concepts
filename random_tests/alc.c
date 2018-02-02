#include <stdio.h>

int main()
{
    int a=0, b=0, i;
    char temp;
    int alc[3]={0}, bob[3]={0};
//enter alice 
   do {
      scanf("%d%c", &alc[i], &temp);
      i++;
    } while(temp != '\n');

//enter bob
   do {
      scanf("%d%c", &bob[i], &temp);
      i++;
   } while(temp != '\n');

//print alice
    for(i = 0; i < 3 ; i++)
{
	printf("%d ", alc[i]);
}
//printf("\n");
//print bob
 for(i = 0; i < 3 ; i++)
{
	printf("%d ", bob[i]);
}
printf("\n");

//compare
    for(i = 0; i < 3 ; i++)
    {
        if(alc[i] > bob[i]){
	    printf("A %d\n", a);
               a++;}
        else if(alc[i] < bob[i]){
	    printf("B %d\n",b);
            b++;}
        else
            ;
    }
    printf("%d %d", a, b);
    return 0;    
}
