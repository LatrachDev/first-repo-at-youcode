#include <stdio.h>

int main()
{
    int T[10], n, vr, vn, x;

    printf("Entrez le nombre d'elements du tableau (max 10) : ");
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
        scanf("%d", &T[x]);
    }

    printf("Entrez la valeur a remplacer : ");
    scanf("%d", &vr);
    
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &vn);

    for (x = 0; x < n; x++)
    {
        if (T[x] == vr)
        {
            T[x] = vn;
        }
    }

    printf("Tableau modifie : \n");
    for (x = 0; x < n; x++)
    {
        printf("%d ", T[x]);
    }
    printf("\n");

    return 0;
}
