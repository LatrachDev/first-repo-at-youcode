#include <stdio.h>

int main()
{
    int n, x, somme;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    somme = 0;
    for (x = 1; x <= n; x++)
    {
        somme += x;
    }
    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);

    return 0;
}