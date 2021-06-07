#include <stdio.h>
#include <stdlib.h>

struct Node
{
    double wartosc;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
};

void wypisz(struct Node *root)
{
    if (root != 0)
    {
        wypisz(root->left);
        printf("%lf ", root->wartosc);
        wypisz(root->right);
    }
}

void wstaw(double wart, struct Node **root)
{
    struct Node *nowy = malloc(sizeof(struct Node));
    struct Node *poprzednik, *ws;
    nowy->left = 0;
    nowy->right = 0;
    nowy->wartosc = wart;
    poprzednik = 0;
    ws = *root;

    while (ws)
    {
        poprzednik = ws;
        if (wart >= ws->wartosc)
        {
            ws = ws->right;
        }
        else
        {
            ws = ws->left;
        }
    }

    nowy->parent = poprzednik;
    if (poprzednik == 0)
    {
        *root = nowy;
    }
    else if (wart >= poprzednik->wartosc)
    {
        poprzednik->right = nowy;
    }
    else
    {
        poprzednik->left = nowy;
    }
}

struct Node *wyszukaj_maks(struct Node *ws)
{
    while (ws->right)
    {
        ws = ws->right;
    }
    return ws;
}

struct Node *wyszukaj_min(struct Node *ws)
{
    while (ws->left)
    {
        ws = ws->left;
    }
    return ws;
}

struct Node *wyszukaj(struct Node *ws, double wartosc)
{
    while (ws && wartosc != ws->wartosc)
    {
        if (wartosc >= ws->wartosc)
        {
            ws = ws->right;
        }
        else
        {
            ws = ws->left;
        }
    }
    if (ws->wartosc == wartosc)
    {
        return ws;
    }
    else
    {
        return 0;
    }
}

struct Node *nastepnik(struct Node *wezel)
{
    struct Node *poprzednik = wezel->parent;
    if (wezel->right)
    {
        return wyszukaj_min(wezel->right);
    }

    while (poprzednik && poprzednik->right == wezel)
    {
        wezel = poprzednik;
        poprzednik = poprzednik->parent;
    }
    return poprzednik;
}

int main(void)
{
    struct Node *root = 0;

    wstaw(12, &root);
    wstaw(6, &root);
    wstaw(2, &root);
    wstaw(13, &root);
    wstaw(8, &root);
    wstaw(9, &root);
    printf("Values: ");
    wypisz(root);
    printf("\nMax value: %.2f\n", wyszukaj_maks(root)->wartosc);
    printf("Min value: %.2f\n", wyszukaj_min(root)->wartosc);
    printf("node of 13 is: %.2f\n", wyszukaj(root, 13));
    printf("\"nastepnik\" of 8 is: %.2f\n", nastepnik(wyszukaj(root, 8))->wartosc);
    printf("\"nastepnik\" of 9 is: %.2f\n", nastepnik(wyszukaj(root, 9))->wartosc);
    printf("\"nastepnik\" of 13 is: ");
    if (nastepnik(wyszukaj(root, 13)) != 0)
    {
        printf("%.2f", nastepnik(wyszukaj(root, 13))->wartosc);
    }
    else
    {
        printf("brak \"nastepnika\"");
    }
    printf("\n");

    return 0;
}