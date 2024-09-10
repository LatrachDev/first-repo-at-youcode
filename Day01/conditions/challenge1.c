#include <stdio.h>

int main()
{
    int x;

    printf("Entrer un nombre : ");
    scanf("%d", &x);

    if(x%2 == 0)
    {
        printf("%d est PAIR\n", x);
    }
    else
    {
        printf("%d est IMPAIR\n", x);
    }

    return 0;
}