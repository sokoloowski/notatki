#include <stdio.h>

void insertion_sort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int tablica[20] = {1, 5, 4, 7, 12, 17, 11, 8, 0, 86,
                       12, 1, 17, 2, 21, 56, 53, 20, 10, 15};

    insertion_sort(tablica, 20);

    printf("Insertion sort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}