#include <stdio.h>

int main()
{
    int a, b;

    printf("Entrer la valeur de a :\t");
    scanf("%d", &a);

    printf("Entrer la valeur de b :\t");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d - %d = %d\n", a, b, a-b);
    if (b == 0)
    {
        printf("Division par zero n'est pas possible.\n");
    } 
    else
    {
        printf("%d / %d = %.2f\n", a, b, (float)a/b);
    }
    
    
}