#include <stdio.h>

int main()
{
    int arr[10];

    size_t taill = sizeof(arr);

    printf("Taille de arr : %zu bytes\n", taill);
    printf("Nombre d'élements : %zu\n", taill / sizeof(int));

    return 0;
}