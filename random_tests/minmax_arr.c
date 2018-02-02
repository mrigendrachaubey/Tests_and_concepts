#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int sum, min, max, i;
    int sm[5] = {0};
    //get the whole sum
    for(i = 0; i < arr_size ; i++)
    {
        sum = sum + arr[i];
    }
    //subtract one by one element from the sum and store the result
    for(i = 0; i < arr_size; i++)
    {
        sm[i] = sum - arr[i];        
    }

    for(i = 0; i < arr_size; i++)
    {
        printf("%d ", sm[i]);
    }
    printf("\n");
    //find the biggest
    min = sm[0];//assume its min
    max = sm[0];//assume its max
    for(i = 1; i < arr_size;i++)
    {
        if(sm[i] > max)
               max = sm[i];
        if(sm[i] < min)
                min = sm[i];
    }
    printf("%d %d", min, max);
}

int main() {
    int arr_i=0;
    int *arr = malloc(sizeof(int) * 5);
    for (arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}

