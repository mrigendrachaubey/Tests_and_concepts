//convert 07:05:45PM to 19:05:45
//12:05:45AM to 00:05:45
//12:05:45PM to 12:05:45
//12:00:00AM to 00:00:00

#include <stdio.h>
#include <stdlib.h>

int getdigit(char *s)
{
	int msb=0, lsb=0, num=0;
	msb = s[0] - 48;
	lsb = s[1] - 48;
	num = msb*10 + lsb;
	return num;
}


char* timeConversion(char* s) {
   // Complete this function
	int msb=0, lsb=0,x, y, digit=0, i = 0 ;
	char c;
	digit = getdigit(s);
	char arr[8] = {0};
	for (i = 0; i < 8 ;i++)
	{
		arr[i] = s[i];
	}	
//	printf("%s\n",arr);//remove
	
	if (s[8] == 'A' || s[8] == 'a')//am
	{
		if(digit == 12)
			digit = digit - 12;
		else;
		s[0] = '0';
		s[1] = digit + 48;
	}
	else if (s[8] == 'P' || s[8] == 'p')//pm
	{
		if(digit != 12)
			digit = digit + 12;
		x = digit%10;
		y = digit/10;
		s[0] = y+48;
		s[1] = x+48;

	}
s[8] = '\0';
//printf("%s\n", arr);
return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

