#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int issorted(int *list, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] > list[i + 1])
            return 0;
    }
    return 1;
}

int main(void)
{
    int n = 3, total = 0;

    int list[] = {2, 1, 3};

    srand(time(NULL));

    while (!issorted(list, n - 1))
    {
        int index_1 = rand() % n;
        int index_2 = rand() % n;

        int temp = list[index_1];
        list[index_1] = list[index_2];
        list[index_2] = temp;
        printf("%dta iteracja: {%d, %d, %d}\n", ++total, list[0], list[1], list[2]);
    }

    printf("\n");
    printf("n! = %d\n", factorial(n));
    printf("n = %d\nZłożoność = %d\n", n, total);
    return 0;
}