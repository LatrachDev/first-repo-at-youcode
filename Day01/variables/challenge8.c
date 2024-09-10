#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, multiple;

    printf("Entrer la valeur de a :");
    scanf("%f", &a);

    printf("Entrer la valeur de b :");
    scanf("%f", &b);

    printf("Entrer la valeur de c :");
    scanf("%f", &c);

    multiple = pow((a*b*c), 1.0/3.0);

    printf("La moyenne géométrique est : %.3f\n", multiple);

    return 0;
}