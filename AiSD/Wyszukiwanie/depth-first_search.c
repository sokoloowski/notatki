#include <stdio.h>

struct edge
{
    int u;
    int v;
    double w;
};

struct verticle
{
    int predecessor;
    double w;
};

double stack[100] = {0};
int end = 0,
    length = 100;

void insert(double a)
{
    if (end < length)
        stack[end++] = a;
}

double get(void)
{
    if (end > 0)
        return stack[--end];
    return 0;
}

void dfs(struct edge *krawedzie, int u, int m, struct verticle *poprzednik, int *odwiedzone)
{
    odwiedzone[u] = 1;
    for (int i = 0; i < m; i++)
    {
        if (krawedzie[i].u == u)
        {
            if (odwiedzone[krawedzie[i].v] == 0 || poprzednik[krawedzie[i].v].w > krawedzie[i].w)
            {
                poprzednik[krawedzie[i].v].predecessor = krawedzie[i].u;
                poprzednik[krawedzie[i].v].w = krawedzie[i].w;
                dfs(krawedzie, krawedzie[i].v, m, poprzednik, odwiedzone);
            }
        }
    }
}

int main()
{
    struct edge krawedzie[6] = {{0, 1, 1}, {0, 4, 1}, {0, 3, 2}, {1, 2, 2}, {3, 2, 2}, {4, 3, 5}};
    int n = 5;
    int m = 6;
    struct verticle prev[n];
    int odwiedzone[n];
    for (int i = 0; i < n; i++)
    {
        prev[i].predecessor = -1;
        prev[i].w = 0;
        odwiedzone[i] = 0;
    }
    dfs(krawedzie, 0, m, prev, odwiedzone);
    for (int i = 0; i < n; i++)
    {
        printf("Numer wierzchołka: %d\nPoprzednik: %d\n\n", i, prev[i]);
    }
    return 1;
}