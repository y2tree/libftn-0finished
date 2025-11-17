#include <stdio.h>

void print_n_times(char c, size_t n)
{
    // TON CODE ICI
    int i = 0;
    while (i < n)
    {
        printf("%c", c);
        i++;
    }
    
    // Affiche le caractère c, n fois
    // Utilise size_t pour la boucle
}

int main()
{
    print_n_times('A', 5);   // Affiche : AAAAA
    printf("\n");
    print_n_times('B', 10);  // Affiche : BBBBBBBBBB
    printf("\n");
    
    return 0;
}
