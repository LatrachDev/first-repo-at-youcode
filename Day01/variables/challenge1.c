#include <stdio.h>

int main()
{
    char nom[10], prenom[10], sexe[10], email[50];
    int age;
    printf("Entrer votre nom :\t");
    scanf("%s", nom);

    printf("Entrer votre prenom :\t");
    scanf("%s", prenom);

    printf("Entrer votre sexe (Male/Female):\t");
    scanf("%s", sexe);

    printf("Entrer votre age :\t");
    scanf("%d", &age);

    printf("Entrer votre adresse email :\t");
    scanf("%s", email);

    printf("votre nom et prenom : %s %s\n", nom, prenom);
    printf("votre sexe : %s\n", sexe);
    printf("votre age : %d\n", age);
    printf("votre adresse email : %s\n", email);


    return 0;
}