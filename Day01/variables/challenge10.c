#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    float volume;
    const float PI = 3.14159;

    printf("Entrer le rayon de la sphere : ");
    scanf("%d", &r);

    volume = (4.0/3.0) * PI * pow(r, 3);

    printf("le volume de la sphere est : %.2f\n", volume);

    return 0;
}