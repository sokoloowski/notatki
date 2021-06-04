#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(double *arr, int end)
{
    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};

    bubblesort(tablica, 20 - 1);

    printf("Bubblesort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    return 0;
}