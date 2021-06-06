#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 100, total = 0, search = 0;
    for (int x = 0, z = n; x < n;)
    {
        total++;
        int y = x + (z - x) / 2;
        if (search < y)
        {
            z = y - 1;
        }
        else if (search > y)
        {
            x = y + 1;
        }
        else
        {
            printf("Znaleziono! search = %d\n", search);
            break;
        }
    }
    printf("\n");
    printf("log(n) = %lf\n", log(n) / log(2));
    printf("n = %d\nZłożoność = %d\n", n, total);
    return 0;
}