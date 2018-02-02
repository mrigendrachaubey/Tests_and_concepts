//pass double dim array
#include <stdio.h>

void fun (int arr[3][3])
{
int i, j;
for(i = 0; i < 3 ;i++)
   for(j = 0; j < 3 ;j++)
	printf("%d ", arr[i][j]);

}


int main()
{
  int ar[3][3]={{1,2,3}, {3,4,5}, {7,8,9}};
  fun(ar);
  return 0;

}
