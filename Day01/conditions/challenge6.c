#include <stdio.h>

int main()
{
    int x;

    printf("Entrer la valeur de x : ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Le nombre %d est positif\n", x);
    }
    else if (x == 0)
    {
        printf("le nombre est egal a zero\n", x);
    }
    else if (x < 0)
    {
        printf("Le nombre %d est negatif\n", x);
    }
    
    return 0;
}