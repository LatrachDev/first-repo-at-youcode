#include <stdio.h>

int main()
{
    int x = 0, n;

    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un entier positif.\n");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            x++;
        }
    }

    printf("Nombre de chiffres = %d.", x);
    
    return 0;
}