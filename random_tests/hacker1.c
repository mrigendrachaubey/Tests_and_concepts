#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_size, int* arr) {
    // Complete this function
    int p=0, n=0, z=0, i=0;
    float pf=0.0, nf=0.0, zf=0.0;
    for(i = 0; i < arr_size; i++)   
    {
        if(arr[i] < 0)
            n++;
        else if(arr[i] > 0)
            p++;
        else
            z++;
    }
    printf("%d %d %d\n", p, n, z);
    pf = (float)p/arr_size;
    nf = (float)n/arr_size;
    zf = (float)z/arr_size;
    printf("%f\n%f\n%f", pf, nf, zf);
}

int main() {
    int n, arr_i; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    for (arr_i = 0; arr_i < n; arr_i++) {
       printf("%i ",arr[arr_i]);
    }
    printf("\n");
    plusMinus(n, arr);
    return 0;
}

