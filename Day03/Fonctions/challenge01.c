#include <stdio.h>

int somme(int a, int b )
{
    printf("%d + %d = %d\n", a, b, a+b);
}

int main ()
{
    somme(1, 2);
    return 0;
}