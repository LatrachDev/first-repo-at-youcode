#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char *jours[] = 
    {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };

    srand(time(NULL));

    int randomIndex = rand() % 7;

    printf("Jour aleatoire de la semaine : %s\n", jours[randomIndex]);

    return 0;
}