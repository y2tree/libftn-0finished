    #include <stddef.h>
    #include <stdio.h>

// void    *ft_memset(void *b, int c, size_t len)
// {
//     /* déclarer une variable temporaire unsigned char * 
//     */
//    unsigned char * tmp_ptr;

//     /* rendre cette variable temporaire égale à void *b converti en unsigned char */
//     tmp_ptr = (unsigned char *)b;

//     /* boucle sur la variable temporaire tant que nous n'avons pas atteint len */
//     while (len > 0)
//     {
//         tmp_ptr[len] = c;
//         len--;
//     }
//         /* tu écris la valeur de c dans la case mémoire actuelle,
// puis tu passeras à la suivante au tour suivant.    dans cette boucle, définir l'octet actuel égal à c converti en unsigned char */
//     /* retourner void *b */
//     return tmp_ptr;
// }

#include <stddef.h>

void	*ft_memset(void *v, int r, size_t len)
{
	
}


    int main ()
    {
        char d[] = "avan";
        ft_memset(d, 'e', 1);
        printf("%s", d);
        return 0;
    }


/*
unsigned char *tmp_ptr; // je crée un pointeur temporaire en unsigned char pour pouvoir manipuler chaque octet de b
    tmp_ptr = (unsigned char *)b; // je convertis le pointeur void en pointeur vers unsigned char
    while (len > 0) // tant qu’il reste des octets à traiter
    {
        // je remplace la valeur pointée par tmp_ptr par la valeur c
        // puis j’avance tmp_ptr à la position suivante
        // je décrémente len à chaque tour
    }
    // je retourne le pointeur d’origine b
*/