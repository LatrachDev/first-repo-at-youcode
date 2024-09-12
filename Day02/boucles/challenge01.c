#include <stdio.h>

int main()
{
    int n, x;

    printf("Entrez un nombre : ");
    scanf("%d", &n);
    for ( x = 0; x <= 10; x++)
    {
        printf("%d * %d = %d\n", n, x, n*x);
    }
    
    return 0;
}