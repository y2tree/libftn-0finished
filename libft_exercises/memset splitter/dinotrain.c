#include <stdio.h>

int main()
{
    int nb = 0;
    unsigned char *ptr = (unsigned char *)&nb;

    ptr[0] = 255;
    ptr[1] = 255;
    ptr[2] = 0;
    ptr[3] = 0;
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);

    printf("nb = %d\n", nb);
}