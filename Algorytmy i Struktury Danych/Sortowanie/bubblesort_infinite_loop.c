#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(double *tab, int n)
{
    int zm = 1;
    while (zm)
    {
        zm = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (tab[i] > tab[i + 1])
            {
                swap(&tab[i], &tab[i + 1]);
                zm = 1;
            }
        }
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};

    bubblesort(tablica, 20);

    printf("Bubblesort - infinite loop\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    return 0;
}