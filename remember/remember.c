/*
#include <stdio.h>

int main()
{
    int nb = 256;
    unsigned char *ptr = (unsigned char *)&nb;
    
    // Affiche les 4 bytes de nb
    printf("Byte 0 : %d\n", ptr[0]);
    printf("Byte 1 : %d\n", ptr[1]);
    printf("Byte 2 : %d\n", ptr[2]);
    printf("Byte 3 : %d\n", ptr[3]);
    
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int nb = 0;
    unsigned char *ptr = (unsigned char *)&nb;

    ptr[0]= 255;
    printf("nb vaut maintenant : %D\n", nb);

    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    unsigned char *ptr = (unsigned char *)arr;

    int total_bytes = sizeof(int) * 3;

    for (int i =0; i < total_bytes; i++)
    {
        ptr[i] = 255;
    }

    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);

    return 0;
}
*/

/*
#include <stdio.h>

// Remplit n bytes avec la valeur val

*/

