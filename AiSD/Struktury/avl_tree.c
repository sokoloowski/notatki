#include <stdio.h>
#include <stdlib.h>

struct element
{
    double wartosc;
    struct element *lewy, *prawy, *ojciec;
    int bf;
};

void LeftRotation(struct element **root, struct element *x)
{
    struct element *y = x->prawy;
    x->prawy = y->lewy;
    if (y->lewy)
        x->prawy->ojciec = x;
    y->ojciec = x->ojciec;
    if (x->ojciec == 0)
        *root = y;
    else if (x == x->ojciec->lewy)
        x->ojciec->lewy = y;
    else
        x->ojciec->prawy = y;
    y->lewy = x;
    x->ojciec = y;
}

void RightRotation(struct element **root, struct element *x)
{
    struct element *y = x->lewy;
    x->lewy = y->prawy;
    if (y->prawy)
        x->lewy->ojciec = x;
    y->ojciec = x->ojciec;
    if (x->ojciec == 0)
        *root = y;
    else if (x == x->ojciec->prawy)
        x->ojciec->prawy = y;
    else
        x->ojciec->lewy = y;
    y->prawy = x;
    x->ojciec = y;
}

void wstaw(struct element **korzen, double wart)
{
    struct element *ws = *korzen, *poprzednik, *nowy = malloc(sizeof(struct element));
    nowy->wartosc = wart;
    nowy->lewy = 0;
    nowy->prawy = 0;
    nowy->bf = 0;
    poprzednik = 0;

    while (ws)
    {
        poprzednik = ws;
        if (wart >= ws->wartosc)
            ws = ws->prawy;
        else
            ws = ws->lewy;
    }

    nowy->ojciec = poprzednik;

    if (poprzednik == 0)
        *korzen = nowy;
    else if (wart >= poprzednik->wartosc)
        poprzednik->prawy = nowy;
    else
        poprzednik->lewy = nowy;

    //dodatek dla AVL
    if (poprzednik == 0)
        return;

    if (poprzednik->bf)
    {
        poprzednik->bf = 0;
        return;
    }

    if (poprzednik->lewy == nowy)
        poprzednik->bf = 1;
    else
        poprzednik->bf = -1;

    ws = poprzednik->ojciec;

    while (ws && ws->bf == 0)
    {
        if (ws->lewy == poprzednik)
            ws->bf = 1;
        else
            ws->bf = -1;
        poprzednik = ws;
        ws = ws->ojciec;
    }
    if (ws)
    {
        if (ws->bf == 1 && ws->prawy == poprzednik)
        {
            ws->bf = 0;
            return;
        }
        if (ws->bf == -1 && ws->lewy == poprzednik)
        {
            ws->bf = 0;
            return;
        }
        if (ws->bf == 1 && ws->lewy == poprzednik && poprzednik->bf == -1) //LR
        {
            if (ws->lewy->prawy->bf == 1)
                ws->bf = -1;
            else
                ws->bf = 0;
            if (ws->lewy->prawy->bf == -1)
                ws->lewy->bf = 1;
            else
                ws->lewy->bf = 0;
            ws->lewy->prawy->bf = 0;
            LeftRotation(korzen, ws->lewy);
            RightRotation(korzen, ws);
        }
        if (ws->bf == 1 && ws->lewy == poprzednik && poprzednik->bf == 1) //LL
        {
            ws->bf = 0;
            ws->lewy->bf = 0;
            RightRotation(korzen, ws);
        }
        if (ws->bf == -1 && ws->prawy == poprzednik && poprzednik->bf == 1) //RL
        {
            if (ws->prawy->lewy->bf == -1)
                ws->bf = 1;
            else
                ws->bf = 0;
            if (ws->prawy->lewy->bf == 1)
                ws->prawy->bf = -1;
            else
                ws->prawy->bf = 0;
            ws->prawy->lewy->bf = 0;
            RightRotation(korzen, ws->prawy);
            LeftRotation(korzen, ws);
        }
        if (ws->bf == -1 && ws->prawy == poprzednik && poprzednik->bf == -1) //RR
        {
            ws->bf = 0;
            ws->prawy->bf = 0;
            LeftRotation(korzen, ws);
        }
    }
}

void wypisz(struct element *korzen, int glebokosc)
{
    if (glebokosc > 0)
    {
        printf("%.2f\n", korzen->wartosc);
        if (korzen->lewy)
            wypisz(korzen->lewy, glebokosc - 1);
        if (korzen->prawy)
            wypisz(korzen->prawy, glebokosc - 1);
    }
}

int main(void)
{
    struct element *root = 0;
    wstaw(&root, 1);
    wstaw(&root, 2);
    wstaw(&root, 3);
    wstaw(&root, 4);
    wstaw(&root, 5);
    wstaw(&root, 6);
    wstaw(&root, 7);
    wypisz(root, 4);
    return 0;
}