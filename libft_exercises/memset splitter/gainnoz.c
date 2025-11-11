#include <stdio.h>

int main()
{
    int tab[3];
    unsigned char *ptr = (unsigned char *)tab;
/*     printf("%d\n", tab);
*/
    for (int i = 0; i < 12; i++)
    {
        ptr[i] = 0;
    }
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);

}

