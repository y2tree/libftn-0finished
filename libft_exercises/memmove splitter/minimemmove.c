#include <stdio.h>

void *mini_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    
    if (src == NULL && dest == NULL)
        return NULL;

    if (d > s)
    {
        size_t i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    
    return (dest);
}

int main()
{
    // Test 1 : Pas d'overlap
    char str1[20] = "hello";
    char dest1[20];
    mini_memmove(dest1, str1, 6);
    printf("Test 1 : %s\n", dest1);  // "hello"
    
    // Test 2 : Overlap vers la droite (d > s)
    char str2[20] = "hello world";
    mini_memmove(str2 + 2, str2, 5);
    printf("Test 2 : %s\n", str2);  // "hehello rld"
    
    // Test 3 : Overlap vers la gauche (d < s)
    char str3[20] = "hello world";
    mini_memmove(str3, str3 + 2, 5);
    printf("Test 3 : %s\n", str3);  // "llo world"
    
    // Test 4 : dest == src
    char str4[20] = "test";
    mini_memmove(str4, str4, 4);
    printf("Test 4 : %s\n", str4);  // "test" (inchangé)
    
    // Test 5 : n = 0
    char str5[20] = "zero";
    mini_memmove(str5, "xxx", 0);
    printf("Test 5 : %s\n", str5);  // "zero" (inchangé)
    
    return 0;
}