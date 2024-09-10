#include <stdio.h>

int main()
{
    char c;

    printf("Entrer un caractere : ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("le caractere donne est un alphabet majuscule\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("le caractere donne est un alphabet miniscule\n");
    }
    else
    {
        printf("C'est pas un caracter\n");
    }
    
    return 0;
}