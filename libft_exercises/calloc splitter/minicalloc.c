#include <stdio.h>
#include <stdlib.h> 
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total = nmemb * size;
    void *ptr = malloc(total);

    if (!ptr)
        return (NULL);

    unsigned char *s = (unsigned char *)ptr;

    for (size_t i = 0; i < total; i++)
        s[i] = 0;
    return (ptr);
}