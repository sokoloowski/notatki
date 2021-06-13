#include <stdio.h>

void counting_sort(const int *tab, int *result, int n, int k)
{
    int c[k];

    for (int i = 0; i < k; i++)
        c[i] = 0;
    for (int i = 0; i < n; i++)
        c[tab[i]]++;
    for (int i = 1; i < k; i++)
        c[i] += c[i - 1];
    for (int i = 0; i < n; i++)
    {
        result[c[tab[i]] - 1] = tab[i];
        c[tab[i]]--;
    }
}

int main(void)
{
    int tablica[20] = {1, 5, 4, 7, 12, 17, 11, 8, 0, 86,
                       12, 1, 17, 2, 21, 56, 53, 20, 10, 15};
    int wynik[20];

    counting_sort(tablica, wynik, 20, 100);

    printf("Counting sort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", wynik[i]);
    }
    printf("\n");

    return 0;
}