#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;

    for (size_t i = 0; i < n; i++)
        ptr[i] = (unsigned char)c;
    return s;
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

int main()
{
    char str[20] = "Hello World!";
    
    printf("Avant : '%s'\n", str);
    
    ft_bzero(str, 5);
    
    printf("Après : '%s'\n", str + 5);  // Affiche " World!"
    
    // Vérifier que les 5 premiers sont bien à 0
    for (int i = 0; i < 5; i++)
        printf("str[%d] = %d\n", i, str[i]);
    
    return 0;
}