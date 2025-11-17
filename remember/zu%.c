#include <stdio.h>

int main ()
{
    size_t n1 = 42;
    size_t n2 = 100;
    size_t somme = n1 + n2;

    printf("n1 = %zu\n", n1);
    printf("n2 = %zu\n", n2);
    printf("somme = (%zu + %zu) = %zu\n",n1, n2, somme);
    return 0;
}