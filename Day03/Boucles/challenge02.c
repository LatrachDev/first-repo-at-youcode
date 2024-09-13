#include <stdio.h>

int main() {
    int n, stars = 1;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < (n - i); j++) 
        {
            printf(" ");
        }

        for (int k = 0; k < stars; k++) 
        {
            printf("*");
        }

        printf("\n");

        stars += 2;
    }

    return 0;
}
