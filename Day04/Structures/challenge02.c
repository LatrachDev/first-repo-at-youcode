#include <stdio.h>
#include <string.h>

struct Etudiant
{
    char nom[20];
    char prenom[20];
    float note[3];
} etudiant1;

int main()
{
    strcpy(etudiant1.nom, "Latrach");
    strcpy(etudiant1.prenom, "Mohammed");
    etudiant1.note[0] = 18;
    etudiant1.note[1] = 18.5;
    etudiant1.note[2] = 17;

    printf("Nom : %s\nPrenom : %s\n", etudiant1.nom, etudiant1.prenom);
    
    printf("Notes : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", etudiant1.note[i]);
    }

    return 0;
}