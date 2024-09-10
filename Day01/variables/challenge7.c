#include <stdio.h>

int main()
{
    int x, y, z, somme;
    float result;

    printf("Entrer la valeur de x : ");
    scanf("%d", &x);

    printf("Entrer la valeur de y : ");
    scanf("%d", &y);

    printf("Entrer la valeur de z : ");
    scanf("%d", &z);
    
    x *= 2; 
    y *= 3;
    z *= 5;
    somme = x+y+z;
    result = (float)somme/10;
    printf("la moyenne pondérée est %.2f", result);

    return 0;
}