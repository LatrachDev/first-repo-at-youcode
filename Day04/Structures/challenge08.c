#include <stdio.h>

struct Cercle
{
    float rayon;
};

float aire(struct Cercle c)
{
    const float PI = 3.14;
    return PI * c.rayon * c.rayon;
}

int main()
{
    struct Cercle cercle;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &cercle.rayon);

    float aireCircle = aire(cercle);
    printf("L'aire du cercle est : %.2f\n", aireCircle);

    return 0;
}
