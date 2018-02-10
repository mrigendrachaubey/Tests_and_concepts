//is power of two
#include<stdio.h>
#define bool int
 
/* Function to check if x is power of 2*/
bool isPowerOfTwo (int x)
{
 
  return x && (!(x&(x-1)));//31 && -31
}
 
/*Driver program to test above function*/
int main()
{
  isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(64)? printf("Yes\n"): printf("No\n");
  return 0;
}
