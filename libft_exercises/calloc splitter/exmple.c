#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== Exemple calloc ===\n\n");
    
    // Allouer un tableau de 5 int avec calloc
    int *arr = calloc(5, sizeof(int));
    
    if (!arr) {
        printf("Erreur : allocation échouée\n");
        return -1;
    }
    
    // Vérifier que tout est à zéro
    printf("Contenu après calloc (tout devrait être 0) :\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("\n");
    
    // Modifier quelques valeurs
    arr[0] = 42;
    arr[2] = 100;
    arr[4] = 255;
    
    // Afficher le nouveau contenu
    printf("Contenu après modification :\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Libérer la mémoire
    free(arr);
    arr = NULL;
    
    printf("\nMémoire libérée avec succès !\n");
    
    return 0;
}