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

    if (nombre>max || nombre<=0)
    {
        printf(" nombre des elements est incorect ! ");
        
    } 
    for(int i=0;i<nombre;i++)
    {   printf("Entrez Le %d nombre :\n", i+1);
        scanf("%d",&tab[i]);
    }
           printf("le tableau avant le tri ");
    for(int i=0;i<nombre;i++)
      printf(" %d ",tab[i]);

    int nbr;
        for (int i=0;i<nombre;i++)
    {
        for(int j=0;j<nombre;j++)
        {
            if (tab[j]>tab[j+1])
            {
                nbr=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=nbr;
            }

        }

    }
           printf("\nle tableau apre le tri ");

    for (int i=0;i<nombre;i++)
    
      printf(" %d ",tab[i]);
    
    return 0;
}
