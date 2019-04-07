/*
 * C program to sort N numbers in ascending order using Bubble sort
 * and print both the given and the sorted array
 */
#include <stdio.h>

 
void main()
{
    int array[10] = {5, 6, 21, 11, 67, 975, 33, 442, 21353, 3};
    int i, j, num, temp;
 

    /*   Bubble sorting begins */
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < (10 - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
}
