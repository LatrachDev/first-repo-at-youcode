#include <stdio.h>

int if_paire(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (if_paire(n))
    {
        printf("%d est un nombre pair.\n", n);
    }
    else
    {
        printf("%d est un nombre impair.\n", n);
    }
    
}