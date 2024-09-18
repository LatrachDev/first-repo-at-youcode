#include <stdio.h>
#include <string.h>

struct Personne
{
    char nom[20];
    char prenom[20];
    int age;
} personne1;

int main()
{
    strcpy(personne1.nom, "Latrach");
    strcpy(personne1.prenom, "Mohammed");
    personne1.age = 20;

    printf("\nNom : %s\nPrenom : %s\nAge : %d\n\n", personne1.nom, personne1.prenom, personne1.age);

    return 0;
}