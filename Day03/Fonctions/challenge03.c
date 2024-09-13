#include <stdio.h>

int maximum(int a, int b)
{
    int max = 0;
    if (a > b)
    {
        max = a;
        printf("le max entre %d et %d est : %d\n", a, b, max);
    }
    else if (a < b)
    {
        max = b;
        printf("le max entre %d et %d est : %d\n", a, b, max);
    }
    else if (a == b)
    {
        printf("la valeur de a : %d egale la valeur de b : %d\n", a, b);
    }
}

int main()
{
    maximum(4, 5);
    maximum(5, 5);
    maximum(9, 5);

    return 0;
}