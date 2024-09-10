#include <stdio.h>

int main()
{
    int cel;

    printf("Entrer la temperature en Celsius : ");
    scanf("%d", &cel);
    if (cel<0)
    {
        printf("l'etat de l'eau est SOLIDE\n");
    } 
    else if((cel >= 0) && (cel < 100))
    {
        printf("l'etat de l'eau est LIQUIDE\n");
    }
    else if(cel >= 100)
    {
        printf("l'etat de l'eau est GAZ\n");
    }

    return 0;
}