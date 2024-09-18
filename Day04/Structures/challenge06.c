#include <stdio.h>
#include <string.h>


struct Produit
{
    char nom[50];
    float prix;
    int quantite;
};

int main()
{
    int n;
    
    printf("Entrez le nombre de produits : ");
    scanf("%d", &n);

    struct Produit produits[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nProduit %d\n", i + 1);

        printf("Entrez le nom du produit : ");
        scanf("%s", produits[i].nom);

        printf("Entrez le prix du produit : ");
        scanf("%f", &produits[i].prix);

        printf("Entrez la quantite du produit : ");
        scanf("%d", &produits[i].quantite);
    }

    printf("\nInformations des produits:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nProduit %d\n", i + 1);
        printf("Nom : %s\n", produits[i].nom);
        printf("Prix : %.2f\n", produits[i].prix);
        printf("Quantite : %d\n", produits[i].quantite);
    }

    return 0;
}