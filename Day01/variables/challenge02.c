#include <stdio.h>

int main()
{
    int cel;
    float kelv;
    const float k = 273.15;
    printf("entrer la temperature en Celsius : ");
    scanf("%d", &cel);
    kelv = cel + k;
    printf("%d celsius en Kelvin = %.2f\n", cel, kelv);

    return 0;
}