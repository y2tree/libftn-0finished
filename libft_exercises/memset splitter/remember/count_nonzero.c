#include <stdio.h>

int count_nonzero(void *ptr, int n)
{
    unsigned char *cast = (unsigned char *)ptr;
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        
        printf("%d\n", i);
        if (cast[i] != 0)
            count++;
        

    }
    return (count);
}

int main()
{
    int arr[3] = {255, 333, 2};
    int count = count_nonzero(arr, 12);
    printf("Bytes non nul = %d\n", count);

    return 0;
}