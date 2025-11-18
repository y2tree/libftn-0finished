#include <stdio.h>
int mini_compare(const unsigned char *s1, const unsigned char *s2, size_t n)
{
    size_t i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    } 
    return 0;

}

int main()
{
    unsigned char a[] = {10, 20, 30, 40};
unsigned char b[] = {10, 20, 99, 40};

printf("%d\n", mini_compare(a, b, 4));
// résultat attendu : 10 - 99 = -89

    return 0;
}