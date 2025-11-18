#include <stdio.h>

void fill_reverse(int *arr, int value, size_t n)
{
    size_t i = n;

    while(i > 0)
    {
        i--;
        arr[i] = value;
    }
}

int main()
{
    int arr[5];

    fill_reverse(arr, 42, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}