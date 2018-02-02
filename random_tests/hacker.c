#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int a[a_size_rows][a_size_cols]) {
    // Complete this function
    int sum1=0, sum2=0, sum=0, i, j ;
    if(a_size_rows != a_size_cols)
           return -1;
    
    for(i = 0 ; i < a_size_rows ; i++)
         sum1 = sum1 + a[i][i];
    
    for(i = 0, j = 1; i < a_size_cols ; i++, j++)
        sum2 = sum2 + a[i][a_size_cols - j];//here is the mistake.

    printf("sum1 %d sum2 %i\n", sum1, sum2);
    sum = sum1+sum2;
    
    if(sum < 0)
    {
      sum = sum * (-1);
      printf("sum %i\n", sum);
    }
    else
        ;
    return sum;
         
}

int main() {
    int n; 
    int a_i = 0;
    int a_j = 0;
    int result=0;
    scanf("%i", &n);
    int a[n][n];
    for (a_i = 0; a_i < n; a_i++) {
       for (a_j = 0; a_j < n; a_j++) {
      
          scanf("%i",&a[a_i][a_j]);
       }
    }

    for (a_i = 0; a_i < n; a_i++) {
       for (a_j = 0; a_j < n; a_j++) {
      
          printf("%i ",a[a_i][a_j]);
       }
       printf("\n");
    }
    printf("\n");
    result = diagonalDifference(n, n, a);
    printf("%d\n", result);
    return 0;
}

