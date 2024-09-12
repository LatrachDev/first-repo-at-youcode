#include <stdio.h>

int main()
{
    int T[10], n, somme = 0;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez ses elements : \n");
    for (int x = 0; x < n; x++)
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T[x]);
        somme += T[x];
    }

    printf("La somme totale est : %d", somme);
    
    return 0;
}