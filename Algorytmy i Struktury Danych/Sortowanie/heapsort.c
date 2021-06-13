#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(double *arr, int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(double *arr, int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main(void)
{
    double tablica[20] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86,
                          12, 1, 17, 2, 21, 56, 53, -20, 10, 15};

    heapsort(tablica, 20);

    printf("Heapsort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n");

    return 0;
}