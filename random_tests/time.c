//convert 07:05:45PM to 19:05:45
//12:05:45AM to 00:05:45
//12:05:45PM to 12:05:45

#include <stdio.h>

char* timeConversion(char* s) {
   // Complete this function
	

}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

