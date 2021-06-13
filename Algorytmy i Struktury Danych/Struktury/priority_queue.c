#include <stdio.h>

int heap_size = 0;

int parent(int i)
{
    return i / 2;
}

void heapify(double *arr, int n, int i)
{
    int largest_index = i;
    int left_index = 2 * i;
    int right_index = 2 * i + 1;

    if (left_index <= n && arr[largest_index] < arr[left_index])
    {
        largest_index = left_index;
    }
    if (right_index <= n && arr[largest_index] < arr[right_index])
    {
        largest_index = right_index;
    }
    if (largest_index != i)
    {
        double temp;
        temp = arr[i];
        arr[i] = arr[largest_index];
        arr[largest_index] = temp;
        heapify(arr, n, largest_index);
    }
}

double najw_liczba(double *arr)
{
    return arr[1];
}

double najw_liczba_usun(double *arr)
{
    if (heap_size < 1)
    {
        return -1;
    }
    double tmp_max = arr[1];
    arr[1] = arr[heap_size--];
    heapify(arr, heap_size, 1);
    return tmp_max;
}

void dodaj_liczbe(double *arr, int i, double to_insert)
{
    arr[i] = to_insert;
    while (i > 1 && arr[i] > arr[parent(i)])
    {
        double tmp = arr[i];
        arr[i] = arr[parent(i)];
        arr[parent(i)] = tmp;
        i = parent(i);
    }
}

void wstaw(double *arr, double to_insert)
{
    heap_size++;
    dodaj_liczbe(arr, heap_size, to_insert);
}

int main(void)
{
    double tab[1000];
    heap_size = 0;

    wstaw(tab, 7);
    wstaw(tab, 3);
    wstaw(tab, 4);
    wstaw(tab, 5);
    printf("%.2f\n", najw_liczba_usun(tab));
    printf("%.2f\n", najw_liczba_usun(tab));
    wstaw(tab, 10);
    printf("%.2f\n", najw_liczba_usun(tab));
    wstaw(tab, 2);
    printf("%.2f\n", najw_liczba_usun(tab));
    printf("%.2f\n", najw_liczba_usun(tab));
    printf("%.2f\n", najw_liczba_usun(tab));
    return 0;
}