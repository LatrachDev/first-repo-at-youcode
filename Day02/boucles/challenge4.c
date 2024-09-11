#include <stdio.h>

int main()
{
    int x, n;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont :\n", n);

    for(x = 0; x < n; x++)
    {
        printf("%d", 2 * x + 1);

        if (x < n - 1) {
            printf(", ");
        }

    }
    printf("\n");

    return 0;
}