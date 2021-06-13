#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 100, total = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            printf("Jakaś operacja po raz %dty\n", ++total);
        }
    }
    printf("\n");
    printf("n^2 = %d\n", (int)pow(n, 2));
    printf("n = %d\nZłożoność = %d\n", n, total);
    return 0;
}