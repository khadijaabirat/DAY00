
#include <stdio.h>
#include <string.h>
#define maxchar 50
int main()
{

    char titre[maxchar][maxchar];
    char auteur[maxchar][maxchar];
    float prix[maxchar];
    int quantite[maxchar];
    int i,n,c,nquantite;
    char nom[maxchar];
    char r;
    n= 0;
    
    do
   { 
            printf("_______le menu_______\n");
            printf("1_ Ajouter un livre au stock.\n");
            printf("2_ Afficher tous les livres disponibles.\n");
            printf("3_ Rechercher un livre par son titre.\n");
            printf("4_ Mettre à jour la quantité d'un livre.\n");
            printf("5_ Supprimer un livre du stock.\n");
            printf("6_ Afficher le nombre total de livres en stock.\n");
            printf("choisisez l action que vous voulez :\n");
            scanf("%d",&c);

         switch (c) 
        {
        case 1:
                
                    printf("saisirez le titre:");
                    getchar();
                    fgets(titre[n], sizeof(titre), stdin);

                    printf("saisirez le auteur:");
                    getchar();
                    fgets(auteur[n], sizeof(auteur), stdin);

                    printf("saisirez le prix:");
                    getchar();
                    scanf("%f",&prix[n]);

                    printf("saisirez le quantite:");
                    getchar();
                    scanf("%d",&quantite[n]);
                    n++; 
                    break;

        case 2:  
                for (i=0;i<n;i++)
                printf("\nle %d livre : %s , %s , %f , %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
                break;

        case 3:  
                printf("quelle est le titre livre que vous voullez afficher ?");
                getchar();
                fgets(nom, sizeof(nom), stdin);
            
                for (i=0;i<n;i++)
                {
                        if (strcmp(nom,titre[i]) == 0)
                       {
                        printf("le %d livre : %s , %s , %f , %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
                       
                       }
                        else if (strcmp(nom,titre[i]) != 0)
                        {
                            printf("ce nom nexiste pas: %s \n",nom);

                        }   

                }
                break;

        case 4:  
                 printf("quelle est le titre livre que vous voullez afficher ?");
                getchar();
                fgets(nom, sizeof(nom), stdin);

                for (i=0;i<n;i++)
                {
                        if (strcmp(nom,titre[i]) == 0)
                        {
                            printf(" modifier la quantite :");
                            getchar();
                            scanf("%d",&nquantite);
                            quantite[i] = nquantite;
                            break;
                        }
                        else if (strcmp(nom,titre[i]) != 0)
                        {
                        printf("ce titre nexiste pas: %s \n",nom);
                        }

                }
                break;
        case 5: 
                char sup[maxchar];
                printf("quelle est le titre livre que vous voullez supprimer du stock.");
                getchar();
                fgets(sup, sizeof(sup), stdin);
                for (i=0;i<n;i++)
                {
                        if (strcmp(sup,titre[i]) == 0)
                        {  for(int j = i; j < n; j++)
                            {
                                strcpy(titre[j],titre[j+1]);
                                strcpy(auteur[j],auteur[j+1]);
                                prix[j] = prix[j+1];
                                quantite[j] = quantite[j+1];
                            }   
                                n--;
                            break;
                        }
                        else 
                        {
                        printf("ce titre nexiste pas: %s \n",sup);
                        }

                }
                break;   

        case 6: 
                printf(" le nombre total des livres en stock est: %d\n",n);
                break;   
        
         default:
                printf("%c n'est pas une valeur indiquer.\n", c);
                break; 
    
        } 
 
    } while(c!=0);

    return 0;
}