#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 10, total = 0;

    for (int i = 0; i < (int)pow(2, n); i++)
    {
        printf("Jakaś operacja po raz %dty\n", ++total);
    }

    printf("\n");
    printf("2^n = %d\n", (int)pow(2, n));
    printf("n = %d\nZłożoność = %d\n", n, total);
    return 0;
}