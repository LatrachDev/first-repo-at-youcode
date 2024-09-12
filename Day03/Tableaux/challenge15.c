#include <stdio.h>

int main() {
    int T1[10], T2[10], Tf[20];
    int n1, n2, x, y;

    printf("Entrez le nombre d'elements du premier tableau (max 10) : ");
    scanf("%d", &n1);

    if (n1 > 10) 
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du premier tableau : \n");
    
    for ( x = 0; x < n1; x++) 
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T1[x]);
    }

    printf("Entrez le nombre d'elements du deuxieme tableau (max 10) : ");
    scanf("%d", &n2);

    if (n2 > 10) 
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du deuxieme tableau : \n");

    for ( x = 0; x < n2; x++) 
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T2[x]);
    }

    for ( x = 0; x < n1; x++) 
    {
        Tf[x] = T1[x];
    }

    for ( y = 0; y < n2; y++) 
    {
        Tf[x + y] = T2[y];
    }

    printf("Tableau fusionne : \n");

    for (x = 0; x < (n1 + n2); x++) 
    {
        printf("%d ", Tf[x]);
    }
    printf("\n");

    return 0;
}
