#include <stdio.h>

int main()
{
    size_t n = 42;
    
    // Pour afficher un size_t, on utilise %zu (et pas %d !)
    printf("n = %zu\n", n);
    
    return 0;
}