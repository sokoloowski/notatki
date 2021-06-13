#include <stdio.h>

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
    printf("[INS] Start: %d, End: %d, Size: %d\n", start, end, size);
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
        printf("[GET] Start: %d, End: %d, Size: %d\n", start, end, size);
        return ret;
    }
    return 0;
}

int main(void)
{
    insert(2.02);
    insert(4.32);
    insert(1.2);
    for (int i = start; i != end; i++)
    {
        printf("\t%.2f\n", get());
    }
    insert(43.23);
    insert(6.45);
    insert(2342.347);
    for (int i = start; i != end; i++)
    {
        printf("\t%.2f\n", get());
    }
    return 0;
}