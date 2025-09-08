#include <stdio.h>
#define max 50
/*Challenge 1 : Tri à Bulles
Écrivez un programme C qui implémente l'algorithme 
de tri à bulles pour trier un tableau d'entiers. 
Affichez le tableau avant et après le tri. */
int main() 
{
    int tab [max];
    int nombre;
    printf("Entrez un nombre des elements : ");
    scanf("%d", &nombre);
    for(i=0;i<=nombre;i++)
    {   printf("Entrez Le %d nombre :\n", i+1);
        scanf("%d",&tab[i]);
    }

    if (nombre>max)
    {
        printf("L espace est plain ! ");
    } 
    int nbr;
    for (i=0;i<nombre-1;i++)
    {
        for(j=1;j<nombre;j++)
        {
            if (tab[j]>tab[i])
            nbr=tab[i];
            tab[i]=tab[j];
            tab[j]=nbr;

        }

    }
    for (i=0;i<nombre-1;i++)
    {printf("%d"t[i]);
    }
    return 0;
}
