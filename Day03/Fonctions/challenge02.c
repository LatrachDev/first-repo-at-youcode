#include <stdio.h>

int multiplication(int a, int b)
{
    printf("%d * %d = %d\n", a, b, a*b);
}

int main()
{
    multiplication(5, 2);

    return 0;
}