#include <stdio.h>

int main()
{
    int x, y, somme;

    printf("Entrer la valeur de x : ");
    scanf("%d", &x);
    printf("Entrer la valeur de y : ");
    scanf("%d", &y);

    if (x == y)
    {
        somme = x+y;
        printf("Le resultat de (%d + %d)*3 = %d\n", x, y, somme*3);
    }
    else
    {
        printf("%d + %d = %d\n", x, y, x+y);
    }
    
    return 0;
}