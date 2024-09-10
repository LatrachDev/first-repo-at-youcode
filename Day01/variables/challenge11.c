#include <stdio.h>

int main()
{
    int x, y, surface;

    printf("Entrer la longueur : ");
    scanf("%d", &x);

    printf("Entrer la largeur : ");
    scanf("%d", &y);

    surface = x*y;
    printf("la surface d'un rectangle est : %d cm carre\n", surface);

    return 0;
}