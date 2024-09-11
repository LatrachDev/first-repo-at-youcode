#include <stdio.h>

int main()
{
    int x, n, somme = 0;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un entier positif.\n");
    }
    else
    {
        for ( x = 1; x <= n; x++)
        {
            somme += x;
        }
        
        printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);
    }

    return 0;
    
}