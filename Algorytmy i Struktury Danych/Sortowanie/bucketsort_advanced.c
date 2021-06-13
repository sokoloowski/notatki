#include <stdio.h>

struct el_listy
{
    int next;
    int value;
};

int bucketsort(const int *tab, int n, int liczba_kubelkow, struct el_listy *element)
{
    int poczatek_1[liczba_kubelkow + 1];
    int koniec_1[liczba_kubelkow + 1];
    struct el_listy *ws = element;
    int ws0, ws2;

    for (int i = 0; i < liczba_kubelkow + 1; i++)
    {
        poczatek_1[i] = -1;
        koniec_1[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        ws->value = tab[i];
        ws->next = -1;

        if (poczatek_1[ws->value] == -1)
        {
            poczatek_1[ws->value] = i;
            koniec_1[ws->value] = i;
        }

        else
        {
            element[koniec_1[ws->value]].next = i;
            koniec_1[ws->value] = i;
        }
        ws++;
    }

    int i = 0;
    for (i = 0; poczatek_1[i] == -1; i++)
        ;
    ws0 = poczatek_1[i];
    ws2 = koniec_1[i];
    for (i++; i <= liczba_kubelkow; i++)
    {
        if (poczatek_1[i] != -1)
        {
            element[ws2].next = poczatek_1[i];
            ws2 = koniec_1[i];
        }
    }

    return ws0;
}

int main(void)
{
    int tablica[20] = {1, 5, 4, 7, 12, 17, 11, 8, 0, 86,
                       12, 1, 17, 2, 21, 56, 53, 20, 10, 15};
    struct el_listy wynik[20];
    
    int w = bucketsort(tablica, 20, 100, wynik);

    printf("Bucketsort - advanced\n");
    for (; w != -1; w = wynik[w].next)
    {
        printf("%d ", wynik[w].value);
    }
    printf("\n");
}