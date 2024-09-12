#include <stdio.h>

int main()
{
    int n, x;
    unsigned long long factorial = 1;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("La factorielle n'existe pas pour les nombres negatifs !\n");
    }
    else
    {
        for (x = 1; x <= n; x++)
        {
            factorial *= x;
        }
        
    }
    printf("%d! = %llu\n", n, factorial);
    
    return 0;
}