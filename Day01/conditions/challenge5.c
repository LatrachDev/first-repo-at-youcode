#include <stdio.h>

int main()
{
    int annee, choix, mois, jours, heures, minutes, secondes;

    printf("Entrez le nombre d'annees a convertir : ");
    scanf("%d", &annee);

    printf("Choisissez l'unite a laquelle convertir les annees :\n");
    printf("***MENU***\n");
    printf("1 : mois\n");
    printf("2 : jours\n");
    printf("3 : heures\n");
    printf("4 : minutes\n");
    printf("5 : secondes\n");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        mois = annee * 12;
        printf("%d annee(s) equivalent a %d mois.\n", annee, mois);
        break;
    case 2:
        jours = annee * 365;
        printf("%d annee(s) equivalent a %d jours.\n", annee, jours);
        break;
    case 3:
        jours = annee * 365;
        heures = jours * 24;
        printf("%d annee(s) equivalent a %d heures.\n", annee, heures);
        break;
    case 4:
        jours = annee * 365;
        heures = jours * 24;
        minutes = heures * 60;
        printf("%d annee(s) equivalent a %d minutes.\n", annee, minutes);
        break;
    case 5:
        jours = annee * 365;
        heures = jours * 24;
        minutes = heures * 60;
        secondes = minutes * 60;
        printf("%d annee(s) equivalent a %d secondes.\n", annee, secondes);
        break;
    default:
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
        break;
    }

    // mois = annee * 12;
    // jours = annee * 365;
    // heures = jours * 24;
    // minutes = heures * 60;
    // secondes = minutes * 60;

    return 0;
}