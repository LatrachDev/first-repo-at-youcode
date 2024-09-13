#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    int origin = n;
    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (origin < 0)
    {
        rev = -rev;
    }
    
    printf("Le nombre inverse est : %d\n", rev);

    return 0;
}