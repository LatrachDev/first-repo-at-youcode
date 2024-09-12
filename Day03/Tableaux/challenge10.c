#include <stdio.h>

int main ()
{
    int T[10], n, x;
    int r, found = 0;

    printf("Entrez le nombre d'elements de le tableau (max 10) : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du tableau : \n");
    for ( x = 0; x < n; x++)
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T[x]);
    }

    printf("Entrez l'element a rechercher : ");
    scanf("%d", &r);

    for ( x = 0; x < n; x++)
    {
        if (T[x] == r)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("L'element %d est present dans le tableau.\n", r);
    }
    else
    {
        printf("L'element %d n'est pas present dans le tableau.\n", r);
    }

    return 0;
}