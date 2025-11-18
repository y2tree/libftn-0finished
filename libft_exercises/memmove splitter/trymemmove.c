#include <stdio.h>

int main()
{
    char str[20] = "hello word";

    void *dest = str + 4;
    void *src = str;

    if (dest > src && dest < src + 5)
        printf("Overlap vers la droite !\n");
    else if (src > dest && src < dest + 5)
        printf("Overlap vers la gauche !\n");
    else
        printf("Pas d'overlap\n");
}
