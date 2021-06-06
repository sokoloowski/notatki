#include <stdio.h>
#include <limits.h>

struct edge
{
    int u;
    int v;
    double w;
};

struct vertex
{
    int p;
    double w;
};

void dijkstra(struct edge *edges, int start, int m, int n, struct vertex *vertex)
{
    vertex[start].w = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (edges[j].w > 0 && vertex[edges[j].u].w + edges[j].w < vertex[edges[j].v].w)
            {
                vertex[edges[j].v].w = vertex[edges[j].u].w + edges[j].w;
                vertex[edges[j].v].p = edges[j].u;
            }
        }
    }
}

int main(void)
{
    struct edge edges[6] = {{0, 1, 1},
                            {0, 4, 1},
                            {0, 3, 2},
                            {1, 2, 2},
                            {3, 2, 2},
                            {4, 3, 5}};
    int n = 5;
    int m = 6;
    struct vertex vertex[n];
    for (int i = 0; i < n; i++)
    {
        vertex[i].p = -1;
        vertex[i].w = INT_MAX;
    }

    dijkstra(edges, 0, m, n, vertex);

    for (int i = 0; i < n; i++)
    {
        printf("Numer wierzchołka: %d\nPoprzednik: %d\nDystans: %.2f\n\n", i, vertex[i].p, vertex[i].w);
    }
    return 0;
}