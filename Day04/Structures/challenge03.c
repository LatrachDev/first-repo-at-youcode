#include <stdio.h>

struct Rectangle
{
    float longueur;
    float largeur;
} rectangle1;

float aire(float longueur, float largeur)
{
    return largeur * longueur;
}

int main()
{
    printf("Entrez la valeur de la longueur : ");
    scanf("%f", &rectangle1.longueur);
    
    printf("Entrez la valeur de la largeur : ");
    scanf("%f", &rectangle1.largeur);

    printf("l'aire = %.2f cm carre\n", aire(rectangle1.longueur, rectangle1.largeur));

    return 0;
}