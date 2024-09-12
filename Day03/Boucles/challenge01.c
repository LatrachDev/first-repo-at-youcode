#include <stdio.h>

int main()
{
    int n;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for (int x = 10; x > 0; x--)
    {
        printf("%d * %d = %d\n", n, x, n*x);
    }
    return 0;
}