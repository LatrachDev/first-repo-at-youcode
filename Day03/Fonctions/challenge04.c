#include <stdio.h>

int minimum(int a, int b)
{
    int min = 0;
    if (a > b)
    {
        min = b;
        printf("le min entre %d et %d est : %d\n", a, b, min);
    }
    else if (a < b)
    {
        min = a;
        printf("le min entre %d et %d est : %d\n", a, b, min);
    }
    else if (a == b)
    {
        printf("la valeur de a : %d egale la valeur de b : %d\n", a, b);
    }
}

int main()
{
    minimum(4, 5);
    minimum(5, 5);
    minimum(9, 5);

    return 0;
}