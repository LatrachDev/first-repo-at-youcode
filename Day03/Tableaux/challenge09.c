#include <stdio.h>

int main ()
{
    int T[10], n, x;

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

    int start = 0;
    int end = n-1;
    int temp;

    while (start < end)
    {
        temp = T[start];
        T[start] = T[end];
        T[end] = temp;

        start++;
        end--;
    }

    printf("Tableau inverse : \n");
    for ( x = 0; x < n; x++)
    {
        printf("%d ", T[x]);
    }
    printf("\n");
    
    return 0;
}