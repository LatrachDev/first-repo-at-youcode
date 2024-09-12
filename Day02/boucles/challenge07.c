#include <stdio.h>

int main()

{
    int num, inverse = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &num);

    while(num != 0)
    {
        int x = num % 10;
        inverse = inverse * 10 + x;
        num/=10;
    }
    printf("%d", inverse);

    return 0;
}