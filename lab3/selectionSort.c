#include <stdio.h>
#include <time.h>

typedef unsigned int uint;

int selectionSort(int *a, uint n)
{
    uint i, j, min;
    int temp;
    int opcount = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            ++opcount;
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    return opcount;
}

int main()
{
    clock_t start, finish;
    int n, i, arr[100], opcount;
    double total_time;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    start = clock();
    opcount = selectionSort(arr, n);
    finish = clock();
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nOperation Count %d", opcount);
    total_time = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %e\n", total_time);
    return 0;
}