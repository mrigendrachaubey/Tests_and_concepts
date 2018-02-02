#include <stdio.h>

int main()
{
	char temp;
	int alc[3]={0}, bob[3]={0}, i=0;
    
	//enter alice 
	do 
	{
		scanf("%d%c", &alc[i], &temp);
		i++;
        } while(temp != '\n');
        i = 0;
	//enter bob
       do 
	{
		scanf("%d%c", &bob[i], &temp);
		i++;
	} while(temp != '\n');
    
	//print alice
	for(i = 0; i < 3 ; i++)
	{
	    	printf("%d ", alc[i]);
	}
    
	//print bob
	for(i = 0; i < 3 ; i++)
	{
	    	printf("%d ", bob[i]);
	}
    
    
	return 0;    
}

