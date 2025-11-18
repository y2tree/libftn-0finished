#include <stdio.h>

void reverse_copy(char *dest, char *src, size_t n)
{
    for (size_t i = 0; n > i; i++)
        dest[n - 1 - i] = src[n - 1 - i];



}

void reverse_copyv2(char *dest, char *src, size_t n)
{
    size_t i = n;
    while(i > 0)
    {
        i--;
        dest[i] = src[i];
    }
}

int main()
{
    char str[20] = "hello word";

    printf("Avant : %s\n", str);

    reverse_copy(str + 2, str, 5);

    printf("Apres : %s\n", str);

    return 0;
}