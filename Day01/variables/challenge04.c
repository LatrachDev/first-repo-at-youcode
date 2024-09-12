#include <stdio.h>

int main()
{
    int kmh;
    float ms;

    printf("Entrer la vitesse en kilometres par heure : ");
    scanf("%d", &kmh);

    ms = kmh * 0.27778;
    printf("la vitesse en metres par seconde : %.2f\n", ms);

    return 0;
}