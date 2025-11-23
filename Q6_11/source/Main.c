#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    int a[SIZE] = { 34, 23, 12, 45, 9, 1, 77, 56, 89, 4 };

    printf("Original array:\n");
    printArray(a, SIZE);

    bubbleSort(a, SIZE);

    printf("\nSorted array:\n");
    printArray(a, SIZE);

    return 0;
}

void bubbleSort(int array[], int size)
{
    int pass, j, temp;
    int swapped;

    for (pass = 0; pass < size - 1; pass++)
    {
        swapped = 0;   

        for (j = 0; j < size - 1 - pass; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1; 
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
