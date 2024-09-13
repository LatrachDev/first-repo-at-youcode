#include <stdio.h>

int main() 
{
    int n;

    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Le nombre de termes doit etre superieur a 0.\n");
        return 1;
    }

    if (n >= 1) 
    {
        printf("0 ");
    }

    if (n >= 2) 
    {
        printf("1 ");
    }

    int a = 0, b = 1, next;

    for (int i = 3; i <= n; i++) 
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
