#include <stdio.h>

double *mergesort_iter(double *wejscie, double *wyjscie, int n)
{
    int dlugosc_podciagu, poczatek_podciagu, i, j, ograniczenie_i, ograniczenie_j, k;
    double *pomoc;

    for (dlugosc_podciagu = 1; dlugosc_podciagu < n; dlugosc_podciagu *= 2)
    {
        for (poczatek_podciagu = 0, k = 0; k < n; poczatek_podciagu += 2 * dlugosc_podciagu)
        {
            i = poczatek_podciagu;
            j = poczatek_podciagu + dlugosc_podciagu;
            ograniczenie_i = poczatek_podciagu + dlugosc_podciagu;
            ograniczenie_j = poczatek_podciagu + 2 * dlugosc_podciagu;
            if (ograniczenie_i > n)
                ograniczenie_i = n;
            if (ograniczenie_j > n)
                ograniczenie_j = n;

            while (i < ograniczenie_i && j < ograniczenie_j)
            {
                if (wejscie[i] >= wejscie[j])
                    wyjscie[k++] = wejscie[j++];
                else
                    wyjscie[k++] = wejscie[i++];
            }

            while (i < ograniczenie_i)
            {
                wyjscie[k++] = wejscie[i++];
            }

            while (j < ograniczenie_j)
            {
                wyjscie[k++] = wejscie[j++];
            }
        }
        pomoc = wejscie;
        wejscie = wyjscie;
        wyjscie = pomoc;
    }

    return wejscie;
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    double tablica_pomocnicza[20] = {0};
    double *sorted = mergesort_iter(tablica, tablica_pomocnicza, 20);

    printf("Mergesort - iterative\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", sorted[i]);
    printf("\n");

    return 0;
}