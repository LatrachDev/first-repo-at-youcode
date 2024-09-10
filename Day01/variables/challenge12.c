#include <stdio.h>

int main()
{
    int x, revx, thousands, hundreds, tens, units;

    printf("Entrer un nombre (4 chiffres) : ");
    scanf("%d", &x);
    if( x > 9999 || x < 1000 )
    {
        printf("Le nombre doit être 4 chiffres !\n");

        return 0;
    }
    thousands = (x/1000);
    hundreds = (x/100) %10 ;
    tens = (x/10) % 10;
    units = x % 10;
    revx = units*1000 + tens*100 + hundreds*10 + thousands;

    printf("l'ordre inverse de %d est %d\n", x, revx);

    return 0;
}