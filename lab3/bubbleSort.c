#include <stdbool.h>
#include <stdio.h>
#include <time.h>

const int N = 100;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int bubbleSort(int arr[], int n)
{
    int i, j, opcount = 0;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                opcount++;
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
    return opcount;
}

int main()
{
    clock_t start, finish;
    double total_time;
    int n, i, arr[100], opcount;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % (N + 1);
    }
    start = clock();
    opcount = bubbleSort(arr, n);
    finish = clock();
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    total_time = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\nOperation Count: %d", opcount);
    printf("\nTime taken: %e\n", total_time);
    return 0;
}