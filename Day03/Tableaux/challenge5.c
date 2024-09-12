#include <stdio.h>

int main()
{
    int T[10], min, n;

    printf("Entrez le nombre d'elements de le tableau : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez ses elements : \n");

    printf("Element 1 : ");
    scanf("%d", &T[0]);

    min = T[0];

    for (int x = 1; x < n; x++)
    {
        printf("Element %d : ", x+1);
        scanf("%d", &T[x]);

        if (T[x] < min)
        {
            min = T[x];
        }    
    }
    printf("Le minimum est %d\n", min);

    return 0;
}