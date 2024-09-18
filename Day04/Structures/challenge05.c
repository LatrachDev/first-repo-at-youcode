#include <stdio.h>
#include <string.h>

struct Livre
{
    char titre[50];
    char auteur[50];
    int annee;
};

struct Livre creeLivre(char titre[], char auteur[], int annee)
{
    struct Livre livre;

    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;

    return livre;
}

int main()
{
    struct Livre monLivre = creeLivre("The Richest Man in Babylon", "George S. Clason", 1926);

    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee de publication : %d\n", monLivre.annee);

    return 0;
}
