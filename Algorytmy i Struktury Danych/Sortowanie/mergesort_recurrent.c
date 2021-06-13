#include <stdio.h>

void merge(double *table, int leftSide, int center, int rightSide)
{
    double pom[20];
    for (int i = leftSide; i <= rightSide; ++i)
    {
        pom[i] = table[i];
    }
    int i = leftSide;
    int j = center + 1;
    int k = leftSide;
    while (i <= center && j <= rightSide)
    {
        if (pom[i] < pom[j])
        {
            table[k++] = pom[i++];
        }
        else
        {
            table[k++] = pom[j++];
        }
    }

    while (i <= center)
    {
        table[k++] = pom[i++];
    }

    while (j <= rightSide)
    {
        table[k++] = pom[j++];
    }
}

void mergesort(double *table, int x1, int x2)
{
    if (x1 < x2)
    {
        int x3 = (x2 + x1) / 2;
        mergesort(table, x1, x3);
        mergesort(table, x3 + 1, x2);
        merge(table, x1, x3, x2);
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    mergesort(tablica, 0, 20 - 1);

    printf("Mergesort - recurrent\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", tablica[i]);
    printf("\n");

    return 0;
}