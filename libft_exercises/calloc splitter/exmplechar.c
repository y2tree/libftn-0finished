#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Exemple calloc avec char ===\n\n");
    
    char *str = calloc(10, sizeof(char));
    
    if (!str) {
        printf("Erreur : allocation échouée\n");
        return -1;
    }
    
    printf("Contenu après calloc (tout devrait être \\0) :\n");
    for (int i = 0; i < 10; i++) {
        printf("str[%d] = %d\n", i, str[i]);
    }
    
    printf("\nString complète : \"%s\" (vide car tout à \\0)\n\n", str); // ✅ Ajouté str
    
    // Remplir
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    
    printf("Après modification : \"%s\"\n", str);
    
    free(str);
    return 0;
}