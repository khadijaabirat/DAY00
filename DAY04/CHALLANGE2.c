#include <stdio.h>
#define max 50
/*Écrivez un programme C qui implémente l'algorithme 
de tri par insertion pour trier un tableau d'entiers. 
Affichez le tableau avant et après le tri. */
int main() 
{
    int tab [max];
    int nombre;
    printf("Entrez un nombre des elements : ");
    scanf("%d", &nombre);
    for(int i=0;i<nombre;i++)
    {   printf("Entrez Le %d nombre :\n", i+1);
        scanf("%d",&tab[i]);
    }
           printf("le tableau avant le tri ");
    for(int i=0;i<nombre;i++)
      printf(" %d ",tab[i]);

    if (nombre>max || nombre<=0)
    {
        printf(" nombre des elements est incorect ! ");
    } 
    int nbr;
        for (int i=0;i<nombre;i++)
    {
        int j=nombre-1;
        while(j!=i) 
        {
            if (tab[j]>tab[j-1])
            {
                nbr=tab[j];
            tab[j]=tab[j-1];
            tab[j-1]=nbr;
            }
            j--;

        }

    }
           printf("\nle tableau apre le tri ");

    for (int i=0;i<nombre;i++)
    
      printf(" %d ",tab[i]);
    
    return 0;
}
