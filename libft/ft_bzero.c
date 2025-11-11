#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    /* declare a temporary pointer */
    unsigned char *tmp_ptr;
    /* make the temporary pointer equal to *s converted to a char * */
    tmp_ptr = (unsigned char *)s;
    /* loop on the temporary pointer while we didn't reach n characters */
    while (n > 0)
    {
        
    }
    
        /* in that loop, set the current byte equal to 0 */
}



void    *ft_memset(void *b, int c, size_t len)
    {
        unsigned char *tmp_ptr; // je creer une fonction en unsigned char pour switch avec la void
        tmp_ptr = (unsigned char *)b; // je mets la chaine de caractere envoyé dans la variable temp
        while (len > 0) // temps que la taille voulu est plus grande que 0
        {
            *(tmp_ptr++) = (unsigned char)c; // j'incremente ma variable temporaire et je remplace ma position par le int envoyé en parametre
            // style si j'ai void avant, int 'E', len 1. ca va m'ecrire Evan
            len --; // je decremente la taille envoyé en parametre 
        }
        return (b); //et je retourne b jsp pourquoi a voir
    }