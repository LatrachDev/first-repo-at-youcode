#include <stdio.h>

int fibonacci(int n) 
{
    int a = 0, b = 1, temp;

    if (n == 0) 
    {
        return 0;
    }

    for (int i = 2; i <= n; i++) 
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() 
{
    int n;

    printf("Entrez le rang du terme de Fibonacci a afficher: ");
    scanf("%d", &n);

    printf("Le terme %d de la suite de Fibonacci est: %d\n", n, fibonacci(n));

    return 0;
}
