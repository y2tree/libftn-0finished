#include <stdio.h>

int main ()
{
    int nb = 500;
    printf("%d\n", nb);

    unsigned char *ptr = (unsigned char *)&nb;
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);


}

