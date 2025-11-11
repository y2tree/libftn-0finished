#include <stdio.h>

void mini_memset(void *s, unsigned char c, int n)
{
    unsigned char *ptr = (unsigned char *)s;

    int i = 0;
    while (n > i)
    {
        ptr[i] = c;
        i++;
    }
    
}

int main ()
{
    int arr [3] = {1,2,3};
    mini_memset(arr, 0, 12);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

}