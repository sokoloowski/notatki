#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int u;
    int v;
    double w;
};

struct element_listy
{
    int vertex_to;
    struct element_listy *next;
};

double queue[100] = {0};
int start = 0,
    end = 0,
    size = 0,
    length = 100;

void insert(double a)
{
    if (size < length)
    {
        queue[end++] = a;
        size++;
        if (end == length)
            end = 0;
    }
}

double get(void)
{
    if (size > 0)
    {
        size--;
        double ret = queue[start++];
        if (start == length)
        {
            start = 0;
        }
        return ret;
    }
    return 0;
}

void bfs(struct edge *krawedzie, int s, int n, int m, int *poprzednik, int *d)
{
    int odwiedzone[n];
    int u;
    for (int i = 0; i < n; i++)
    {
        poprzednik[i] = -1;
        odwiedzone[i] = d[i] = 0;
    }
    odwiedzone[s] = 1;
    insert(s);
    int liczba_ele = n;
    while (liczba_ele > 0)
    {
        liczba_ele--;
        u = get();
        for (int i = 0; i < m; i++)
        {
            if (krawedzie[i].u == u)
            {
                if (odwiedzone[krawedzie[i].v] == 0)
                {
                    d[krawedzie[i].v] = d[u] + 1;
                    odwiedzone[krawedzie[i].v] = 1;
                    poprzednik[krawedzie[i].v] = u;
                    insert(krawedzie[i].v);
                }
            }
        }
    }
}

int main(void)
{
    struct edge edges[6] = {{0, 1, 1}, {0, 4, 1}, {0, 3, 2}, {1, 2, 2}, {3, 2, 2}, {4, 3, 5}};
    int n = 5;
    int m = 6;
    int prev[n];
    int d[n];
    bfs(edges, 0, n, m, prev, d);
    for (int i = 0; i < n; i++)
    {
        printf("Numer wierzchołka: %d\nPoprzednik: %d\nd: %d\n\n", i, prev[i], d[i]);
    }
    return 0;
}