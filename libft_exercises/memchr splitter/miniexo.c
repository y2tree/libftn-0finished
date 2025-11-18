/*
unsigned char c = 42;
unsigned char *p = &c; // p pointe vers c
unsigned char v = *p;  // v vaut 42
*/

#include <stdio.h>

int main() {
    unsigned char c = 100;

    // Étape 1 : crée un pointeur vers c
    unsigned char *p = &c;

    // Étape 2 : récupère la valeur de c via ce pointeur
    unsigned char v = *p;

    printf("Adresse de c : %p\n", p);
    printf("Valeur de c : %u\n", v);

    return 0;
}
