#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, s1, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Entrez le deuxieme instant (HH:MM:SS) : ");
    scanf("%d %d %d", &h2, &m2, &s2);

    if (h1 > 23 || h2  > 23 || m1 > 59 || m2 > 59 || s1 > 59 || s2 > 59)
    {
        printf("S'il vous plait, les heures ne peuvent pas passer 23h !\nLes minutes ne peuvent pas passer 59min !\nLes secondes ne peuvent pas passer 59s !");

        return 1;
    }
    

    if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
    {
        printf("Le premier instant vient avant le deuxieme.\n");
    }
    else if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2))
    {
        printf("Le deuxieme instant vient avant le premier.\n");
    }
    else
    {
        printf("Il s'agit du meme instant.\n");
    }
    
    return 0;
}