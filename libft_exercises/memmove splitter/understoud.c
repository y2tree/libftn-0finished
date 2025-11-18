#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "hello world";
    
    printf("Avant : %s\n", str);
    
    // On copie "hello" vers la position +2
    // Résultat attendu : "hehello rld"
    memcpy(str + 2, str, 5);
    
    printf("Après memcpy : %s\n", str);
    
    return 0;
}