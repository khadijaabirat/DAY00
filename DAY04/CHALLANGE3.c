#include <stdio.h>
#define max 50
/*Challenge 3 : Tri par Sélection
Écrivez un programme C qui implémente l'algorithme 
de tri par sélection pour trier un tableau d'entiers.
 Affichez le tableau avant et après le tri.

 */
   void echange(int *a,int *b)
{
  int tmp =*a;
      *a=*b;
      *b=tmp;

}

 void triparselection(int tab[],int nombre)
{
 for (int i=0;i<nombre;i++)
 {
    int min=i;
    for(int j=i+1;j<nombre;j++)
    {
        if(tab[j]<tab[min])
        {
            min=j;
        }
    }
    echange(&tab[min],&tab[i]);
 }
}

void affichage(int tab[],int nombre)
{
    for(int i=0;i<nombre;i++)
    {
    printf(" %d ",tab[i]);
    }

}


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
    affichage(tab,nombre);
    triparselection(tab,nombre);
    printf("\nle tableau apres le tri ");
    affichage(tab,nombre);
    
    return 0;
}
