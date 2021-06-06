#include <stdio.h>

int main(void)
{
    int n = 100, total = 0;
    for (int x = 0; x < n; x++)
    {
        printf("Jakaś operacja po raz %dty\n", ++total);
    }
    printf("\n");
    printf("n = %d\nZłożoność = %d\n", n, total);
    return 0;
}