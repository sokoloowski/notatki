#include <stdio.h>
#include <stdlib.h>

struct el_listy
{
    struct el_listy *next;
    int value;
};

struct el_listy *bucketsort(int *tab, int n)
{
    struct el_listy *poczatek[100];
    for (int i = 0; i < 100; i++)
    {
        poczatek[i] = 0;
    }

    struct el_listy *w;

    for (int i = 0; i < 20; i++)
    {
        w = malloc(sizeof(struct el_listy));
        w->value = tab[i];
        w->next = 0;

        if (poczatek[tab[i]] == 0)
        {
            poczatek[tab[i]] = w;
        }
        else
        {
            w->next = poczatek[tab[i]];
            poczatek[tab[i]] = w;
        }
    }

    int i = 0;
    struct el_listy *ws0;
    for (; poczatek[i] == 0; i++)
        ;

    ws0 = poczatek[i];
    w = ws0;
    i++;

    for (; i < 100; i++)
    {
        if (poczatek[i] != 0)
        {
            while (w->next != 0)
            {
                w = w->next;
            }
            w->next = poczatek[i];
        }
    }

    return ws0;
}

int main(void)
{
    int tablica[20] = {1, 5, 4, 7, 12, 17, 11, 8, 0, 86,
                       12, 1, 17, 2, 21, 56, 53, 20, 10, 15};

    struct el_listy *ws0;

    ws0 = bucketsort(tablica, 20);

    printf("Bucket sort\n");
    for (struct el_listy *w = ws0; w != 0; w = w->next)
    {
        printf("%d ", w->value);
    }
    printf("\n");
}