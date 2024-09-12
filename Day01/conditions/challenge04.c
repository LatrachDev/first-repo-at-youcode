#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;
    printf("Entrer la valeur de a et b et c : ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4*a*c;
    if (delta > 0)
    {
        x1 = ((-b + sqrt(delta))/(2*a));
        x2 = ((-b - sqrt(delta))/(2*a));

        printf("Les deux solutions reelles: x1 = %.2f et x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b/2*a);

        printf("Une solution reelle: x = %.2f\n", x1);
    }
    else if (delta < 0)
    {
        printf("Pas de solution !\n");
    }
    
    return 0;
}