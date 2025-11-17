#include <stdio.h>

int main()
{
    size_t a = 10;
    size_t b = 20;

    size_t diff1 = b - a;
    size_t diff2 = a - b;

    printf("diff1 = %zu\n", diff1);
    printf("diff2 = (%zu - %zu) = %zu\n", a, b, diff2);
    return 0;
}