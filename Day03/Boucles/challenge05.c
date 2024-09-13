#include <stdio.h>

int main()
{
    int n, x, somme = 0;

    printf("Entrez le nombre : ");
    scanf("%d", &n);

    for ( x = 1; x <= n; x++)
    {
        printf("%d ", x);
        if (x < n)
        {
            printf("+ ");
        }
        
        somme += x;
    }
    printf(" = %d\n", somme);
    
    return 0;
}