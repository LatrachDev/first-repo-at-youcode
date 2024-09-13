#include <stdio.h>

int main() {
    int n, x;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1;
    }

    printf("Les facteurs de %d sont :\n", n);

    for ( x = 1; x <= n; x++)
    {
        if (n % x == 0)
        {
            printf("%d", x);
            if (x < n)
            {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}