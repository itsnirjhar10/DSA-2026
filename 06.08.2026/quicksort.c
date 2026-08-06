/*Write a prg to take an array 10 unordered number and apply quicksort to order the array in ascending order
input array size 10
array item = [8,2,10,6,5,12,18,9,4,11]*/

#include <stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int arr[10] = {8, 2, 10, 6, 5, 12, 18, 9, 4, 11};
    int i;

    printf("Original Array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, 9);

    printf("\n\nSorted Array in Ascending Order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}