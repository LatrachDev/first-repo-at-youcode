#include <stdio.h>

int main()
{
    int x, n, t1, t2, suivant;
    x = 1;
    t1 = 0;
    t2 = 1;

    printf("Entrez le nombre n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un nombre positif.\n");
    }
    else
    {
        printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

        for ( x = 1; x <= n; x++)
        {
            printf("%d ", t1);
            suivant = t1 + t2;
            t1 = t2;
            t2 = suivant;
        }
        printf("\n");
    }

    return 0;
}