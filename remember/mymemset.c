#include <stdio.h>

void mymemset(void *s, unsigned char c, int n)
{
    unsigned char *ptr = (unsigned char *)s;
    for (int i = 0; i < n; i++)
        ptr[i] = c;
}

int main () 
{
    char str[10] = "hello";

    printf("Avant : %s\n", str);

    mymemset(str, 'X', 5);

    printf("Apres : %s\n", str);
    
    return 0;
}