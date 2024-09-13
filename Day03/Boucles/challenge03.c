#include <stdio.h>

int main() 
{
    int n, i, j, prime;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Les nombres premiers de 1 a %d sont :\n", n);

    for (i = 2; i <= n; i++) 
    {
        prime = 1; 

        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
