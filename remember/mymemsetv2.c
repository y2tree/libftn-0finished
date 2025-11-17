#include <stdio.h>

void my_mymemset_v2(void *s, unsigned char c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    
    for(size_t i = 0; i < n; i++)
        ptr[i] = c;
}

int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Avant : %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]);

    my_mymemset_v2(arr, 0, sizeof(arr));

    printf("Apres : %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}