#include <stdio.h>

int main()
{
    int km;
    float yards;

    printf("Entrer la distance en km : ");
    scanf("%d", &km);

    yards = km * 1093.61;
    printf("La distance en yards est : %.2f\n", yards);

    return 0;
}