#include <stdio.h>
int main()
{
    unsigned char a = 50;
    unsigned char b = 60;

    int result1 = a - b;
    int result2 = b - a;

    printf("a - b = %d et b - a = %d", result1, result2);

}