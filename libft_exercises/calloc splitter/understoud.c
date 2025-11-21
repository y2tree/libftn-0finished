#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allouer un tableau de 5 int
    int *arr = malloc(5 * sizeof(int));
    
    if (!arr) {
        printf("Erreur allocation\n");
        return -1;
    }
    
    // Utiliser
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    // Libérer
    free(arr);
    arr = NULL;
    
    return 0;
}