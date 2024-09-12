#include <stdio.h>

int main()
{
    int T[10], f, n, x;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }
    printf("Entrez ses elements : \n");
    for (x = 0; x < n; x++)
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T[x]);
    }

    printf("Entrez le facteur : ");
    scanf("%d", &f);

    for ( x = 0; x < n; x++)
    {
        printf("%d * %d = %d\n", f, T[x], f*T[x]);
    }

    return 0;
}