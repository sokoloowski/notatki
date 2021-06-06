#include <stdio.h>

double stack[100] = {0};
int end = 0,
    length = 100;

void insert(double a)
{
    if (end < length)
    {
        stack[end++] = a;
    }
    printf("[INS] End: %d\n", end);
}

double get(void)
{
    if (end > 0)
    {
        printf("[GET] End: %d\n", end);
        return stack[--end];
    }
    return 0;
}

int main(void)
{
    insert(2.02);
    insert(4.32);
    insert(1.2);
    for (int i = end; i > 0; i--)
    {
        printf("\t%.2f\n", get());
    }
    insert(43.23);
    insert(6.45);
    insert(2342.347);
    for (int i = end; i > 0; i--)
    {
        printf("\t%.2f\n", get());
    }
    return 0;
}