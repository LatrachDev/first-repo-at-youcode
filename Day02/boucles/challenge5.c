#include <stdio.h>

int main()
{
    int x, base, expo;
    double result = 1.0;

    printf("Entrez la valeur de la base : ");
    scanf("%d", &base);

    printf("Entrez la valeur de l'exposant : ");
    scanf("%d", &expo);

    if(expo >= 0)
    {
        for(x = 0; x < expo; x++)
        {
            result *= base;
        }
    }
    else
    {
        for(x = 0; x < -expo; x++)
        {
            result *= base;
        }
        result = 1.0 / result;
    }
    printf("%d^%d = %.2lf\n", base, expo, result);

    return 0;
}