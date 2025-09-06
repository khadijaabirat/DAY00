#include <stdio.h>
#include <string.h>
#define maxchar 50
int main()
{
    char titre[maxchar][maxchar];
    char auteur[maxchar][maxchar];
    float prix[maxchar];
    int quantite[maxchar];
    int i, n = 0, c, nquantite;
    char nom[maxchar];
    char sup[maxchar];
    int trouve;
    do
    {
        printf("\n_______ MENU _______\n");
        printf("1_ Ajouter un livre au stock.\n");
        printf("2_ Afficher tous les livres disponibles.\n");
        printf("3_ Rechercher un livre par son titre.\n");
        printf("4_ Mettre a jour la quantite d'un livre.\n");
        printf("5_ Supprimer un livre du stock.\n");
        printf("6_ Afficher le nombre total de livres.\n");
        printf("Choisissez une action: ");
        scanf("%d", &c);
        getchar();
        switch (c)
        {
        case 1:
            printf("Titre: ");
            fgets(titre[n], sizeof(titre[n]), stdin);
            titre[n][strcspn(titre[n], "\n")] = '\0';
            printf("Auteur: ");
            fgets(auteur[n], sizeof(auteur[n]), stdin);
            auteur[n][strcspn(auteur[n], "\n")] = '\0';
            printf("Prix: ");
            scanf("%f", &prix[n]);
            printf("Quantite: ");
            scanf("%d", &quantite[n]);
            getchar();
            n++;
            break;
        case 2:
        {
            if(n==0)
            {
                printf("Aucun livre disponible.\n");

            }
            for (i = 0; i < n; i++) printf("\nLivre %d : %s , %s , %.2f , %d", i + 1, titre[i], auteur[i], prix[i], quantite[i]);
            break;
            case 3:
                printf("qu il est le titre de livre que vous voullez chercher ?: ");
                fgets(nom, sizeof(nom), stdin);
                nom[strcspn(nom, "\n")] = '\0';
                trouve = 0;
                for (i = 0; i < n; i++)
                {
                    if (strcmp(nom, titre[i]) == 0)
                    {
                        printf("Livre %d : %s , %s , %.2f , %d\n", i + 1, titre[i], auteur[i], prix[i], quantite[i]);
                        trouve = 1;
                        break;
                    }
                }
                if (trouve==0) printf("Ce titre n'existe pas: %s\n", nom);
                break;
            case 4:
                printf("qu il est le titre de livre que vous voullez modiffier son quantite ");
                fgets(nom, sizeof(nom), stdin);
                nom[strcspn(nom, "\n")] = '\0';
                trouve = 0;
                for (i = 0; i < n; i++)
                {
                    if (strcmp(nom, titre[i]) == 0)
                    {
                        printf("Nouvelle quantite: ");
                        scanf("%d", &nquantite);
                        getchar();
                        quantite[i] = nquantite;
                        trouve = 1;
                        break;
                    }
                }
                if (trouve==0) printf("Ce titre n'existe pas: %s\n", nom);
                break;
            case 5:
                printf("qu il est le titre de livre que vous voullez supprimer en stock ");
                fgets(sup, sizeof(sup), stdin);
                sup[strcspn(sup, "\n")] = '\0';
                trouve = 0;
                for (i = 0; i < n; i++)
                {
                    if (strcmp(sup, titre[i]) == 0)
                    {
                        for (int j = i; j < n - 1; j++)
                        {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        n--;
                        trouve = 1;
                        break;
                    }
                }
                if (trouve==0) printf("Ce titre n'existe pas: %s\n", sup);
                break;
            case 6:
                printf("Nombre total de livres: %d\n", n);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("%d n'est pas une option valide.\n", c);
                break;
            }
        }
        while (c != 0);
        return 0;
    }
