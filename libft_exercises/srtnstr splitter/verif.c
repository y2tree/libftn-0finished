#include <stdio.h>
// Retourne 1 si needle commence à position start, 0 sinon
int starts_at(const char *haystack, const char *needle, int start)
{
    size_t i = 0;
    while (needle[i] != '\0')
    {
        if (needle[i] == haystack[start])
        {
            start++;
            i++;
        }
        i++;
        
    }
    if (start == 0)
        return 0;

    return (1);
}

#include <stdio.h>

int main()
{
    printf("Test 1: %d\n", starts_at("hello", "ell", 1));  // Attendu: 1
    printf("Test 2: %d\n", starts_at("hello", "xyz", 0));  // Attendu: 0
    printf("Test 3: %d\n", starts_at("hello", "lo", 3));   // Attendu: 1
    return 0;
}