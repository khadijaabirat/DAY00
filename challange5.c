
#include <stdio.h>
/*Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

int main()
 {

    int tab[500];
    int n,i,min;
    printf("saisirez le nombre des elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
   {
    printf("saisirez le %d element:",i+1);
    scanf("%d",&tab[i]);
   }
    min=tab[0];
    for (i=0;i<n;i++)
    {
        if( min>tab[i])
        min=tab[i];

    }
    printf("le minimum est: %d",min);

    return 0;
}