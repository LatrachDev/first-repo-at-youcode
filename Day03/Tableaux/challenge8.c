#include <stdio.h>

int main()
{
    int original[10], copy[10], n, x;

    printf("Entrez le nombre d'elements de le tableau (max 10) : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du tableau : \n");
    for (x = 0; x < n; x++)
    {
        printf("Element %d : ", x+1);
        scanf("%d", &original[x]);
    }

    for (x = 0; x < n; x++)
    {
        copy[x] = original[x];
    }
    
    printf("Tableau original : \n");

    for (x = 0; x < n; x++)
    {
        printf("%d ", original[x]);
    }
    printf("\n");

    printf("Tableau copy : \n");

    for ( x = 0; x < n; x++)
    {
        printf("%d ", copy[x]);
    }
    printf("\n");

    return 0;
}