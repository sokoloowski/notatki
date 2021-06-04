#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

int partition(double *tab, int start, int end)
{
    int pivot = tab[end];
    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        if (tab[j] < pivot)
        {
            i++;
            swap(&tab[i], &tab[j]);
        }
    }
    swap(&tab[i + 1], &tab[end]);
    return i + 1;
}

void quicksort(double *tab, int start, int end)
{
    if (start < end)
    {
        int i = partition(tab, start, end);
        quicksort(tab, start, i - 1);
        quicksort(tab, i + 1, end);
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};

    quicksort(tablica, 0, 20 - 1);

    printf("Quicksort - Hoare\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    return 0;
}