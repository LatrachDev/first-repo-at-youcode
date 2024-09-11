#include <stdio.h>

int main() 
{
    int num, bin = 0, hex, p = 1;

    printf("Entrez un nombre entier : ");
    scanf("%d",&num);

    int tmp = num;
    while (tmp > 0) {
        bin += (tmp % 2)*p;
        tmp /= 2;
        p *= 10;
    }
    printf("%d en binair: %d\n", num, bin);

    printf("%d en hex: %x\n", num, num);

    return 0;
}