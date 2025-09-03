
#include <stdio.h>

int main()
 {

    char titre[500][500];
    char auteur[500][500];
    int prix[500];
    int quantite[500];
    int i,n,c;
    char nom[500];
    i=0;

    while(1)
{ 
      printf("le menu.\n");
      printf("choisisez l action que vous voulez :\n
       1_ Ajouter un livre au stock.
       2_ Afficher tous les livres disponibles.
       3_ Rechercher un livre par son titre.
       4_ Mettre à jour la quantité d'un livre.
       5_ Supprimer un livre du stock.
       6_ Afficher le nombre total de livres en stock.");
      scanf("%d",c);
 switch (c) 
 {
        case 1:
    
    printf("saisirez le %d titre:",i+1);
    scanf("%s",titre[i]);

    printf("saisirez le %d auteur:",i+1);
    scanf("%s",auteur[i]);

    printf("saisirez le %d prix:",i+1);
    scanf("%d",&prix[i]);

    printf("saisirez le %d quantite:",i+1);
    scanf("%d",&quantite[i]);

    i++;
    
        break;

        case 2:
         n=i;
        for (i=0;i<n;i++)
        printf("le %d livre : %s , %s , %d , %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
        break;
        case 3:    printf("quelle est le titre livre que vous modifier leur quantite :");
       scanf("%s",nom);

        break;
        case 4: 
         for (i=0;i<n;i++)
     {
     if (nom == titre[i])
     {
        printf(" modifier la quantite :");
        scanf("%d",&quantite[i]);

     }

     }
        break;
         default:
        printf("%c n'est pas une valeur indiquer.\n", c);
         break; 
    }
   
} 
    return 0;
}