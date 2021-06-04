#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(double *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};

    sortowanie(tablica, 20);

    printf("Selection sort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    return 0;
}