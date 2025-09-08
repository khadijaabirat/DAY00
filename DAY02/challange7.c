
#include <stdio.h>
/*Challenge 7 : Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers, 
puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.*/

int main()
 {

    int tab[500];
    int n,i,j,m;
    printf("saisirez le nombre des elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
   {
    printf("saisirez le %d element:",i+1);
    scanf("%d",&tab[i]);
   }
   
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
         {
        if( tab[i]<tab[j])
        {
        m=tab[i];
        tab[i]=tab[j];
        tab[j]=m;
        }
        }
    }
   for (i=0;i<n;i++)
    {
        printf("%d ",tab[i]);
    }
    return 0;
}