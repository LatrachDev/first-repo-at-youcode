#include <stdio.h>

int main()
{
    int mention;

    printf("Entrez votre mention : ");
    scanf("%d", &mention);

    if (mention < 10 && mention >= 0)
    {
        printf("Recale\n");
    }
    else if (mention >= 10 && mention < 12)
    {
        printf("Passable\n");
    }
    else if (mention >= 12 && mention < 14)
    {
        printf("Assez bien\n");
    }
    else if (mention >= 14 && mention < 16)
    {
        printf("Bien\n");
    }
    else if (mention >= 16 && mention <= 20)
    {
        printf("Tres bien\n");
    }
    else
    {
        printf("la mention doit etre comprise entre 0 et 20 !");
    }
    
    return 0;
}