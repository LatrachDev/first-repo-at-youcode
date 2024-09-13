#include <stdio.h>
#include <string.h>

void inverse(char str[])
{
    int start = 0, end = strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }   
}

int main()
{
    char str[100];

    printf("Entrez une chaine : ");
    scanf("%s", str);

    inverse(str);

    printf("chaine inversee est : %s", str);

    return 0;
}