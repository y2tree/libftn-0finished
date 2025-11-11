#include <stdio.h>

// Écris une fonction qui remplit n bytes avec la valeur c
void mini_memset(void *s, unsigned char c, int n)
{
    // n est le compteur
    // c est l'endroit ou est stocke la valeur ecrite (entre 0-255)
    // pas d'ecriture dans la memoire de s
    unsigned char *ptr = (unsigned char *)s;

    int i = 0;
    while (n > i)
    {
        ptr[i] = c;
        i++;
    }
    
}

// Test
int main()
{

int arr[3] = {1, 2, 3};
mini_memset(arr, 0, 12);  // Remplit 12 bytes avec 0
// arr devrait être [0, 0, 0] maintenant
printf("%d\n", arr[0]);
printf("%d\n", arr[1]);

printf("%d\n", arr[2]);

}