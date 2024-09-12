#include <stdio.h>

int main()
{
    int T[10], n, x, temp;

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

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (T[j] > T[j+1])
            {
                temp = T[j+1];
                T[j+1] = T[j];
                T[j] = temp;
            }
        }
    }
    printf("Tableau trie en ordre croissant : \n");
    for ( x = 0; x < n; x++)
    {
        printf("%d ", T[x]);
    }
    printf("\n");
    
    return 0;
}