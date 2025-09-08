#include <stdio.h>
/*Challenge 4 : Trouver le Maximum
Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers.
 Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

int main()
 {

    int tab[500];
    int n,i,max;
    printf("saisirez le nombre des elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
   {
    printf("saisirez le %d element:",i+1);
    scanf("%d",&tab[i]);
   }
    max=tab[0];
    for (i=0;i<n;i++)
    {
        if( max<tab[i])
        max=tab[i];

    }
    printf("le maximum est: %d",max);

    return 0;
}