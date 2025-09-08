#include <stdio.h>
#include <string.h>
#define maxchar 50

char titre[maxchar][maxchar];
char auteur[maxchar][maxchar];
float prix[maxchar];
int quantite[maxchar];

void ajouterLivre(int *n)
{
    printf("Titre: ");
    fgets(titre[*n], maxchar, stdin);

    printf("Auteur: ");
    fgets(auteur[*n], maxchar, stdin);

    printf("Prix: ");
    scanf("%f", &prix[*n]);

    printf("Quantite: ");
    scanf("%d", &quantite[*n]);

    getchar();

    (*n)++;
    if(*n>= maxchar) 
    {
        printf("L'espace est plein !\n");
        return;
    }
}

void afficherLivres(int n)
 {
    if(n==0)
        {
            printf("Aucun livre disponible.\n");
            return;
        }
    for(int i=0;i<n;i++)
        printf("Livre %d : %s , %s , %.2f , %d\n", i+1, titre[i], auteur[i], prix[i], quantite[i]);
}

void rechercherLivre(int n) {
    char nom[maxchar];
    int trouve = 0;
    printf("Titre a rechercher: ");
    fgets(nom, maxchar, stdin);
    nom[strcspn(nom, "\n")] = '\0';

    for(int i=0;i<n;i++) {
        if(strcmp(nom, titre[i]) == 0) {
            printf("Livre %d : %s , %s , %.2f , %d\n", i+1, titre[i], auteur[i], prix[i], quantite[i]);
            trouve = 1;
            break;
        }
    }
    if(trouve==0) 
    printf("Ce titre n'existe pas: %s\n", nom);
}

void modifierQuantite(int n) {
    char nom[maxchar];
    int trouve = 0, nquantite;
    printf("Titre a modifier: ");
    fgets(nom, maxchar, stdin);

    for(int i=0;i<n;i++) {
        if(strcmp(nom, titre[i]) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &nquantite);
            getchar();
            quantite[i] = nquantite;
            trouve = 1;
            break;
        }
    }
    if(trouve==0) 
    printf("Ce titre n'existe pas: %s\n", nom);
}

void supprimerLivre(int *n) {
    char sup[maxchar];
    int trouve = 0;
    printf("Titre a supprimer: ");
    fgets(sup, maxchar, stdin);
    sup[strcspn(sup, "\n")] = '\0';

    for(int i=0;i<*n;i++) {
        if(strcmp(sup, titre[i]) == 0) {
            for(int j=i;j<*n-1;j++) {
                strcpy(titre[j], titre[j+1]);
                strcpy(auteur[j], auteur[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
            }
            (*n)--;
            trouve = 1;
            break;
        }
    }
    if(trouve==0) printf("Ce titre n'existe pas: %s\n", sup);
}

int main() {
    int n = 0; 
    int choix;

    do {
        printf("\n======= MENU =======\n");
        printf("1 - Ajouter un livre\n");
        printf("2 - Afficher tous les livres\n");
        printf("3 - Rechercher un livre\n");
        printf("4 - Modifier quantite\n");
        printf("5 - Supprimer un livre\n");
        printf("6 - Nombre total de livres\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        getchar();

        switch(choix) {
            case 1: ajouterLivre(&n); 
            break;
            case 2: afficherLivres(n); 
            break;
            case 3: rechercherLivre(n); 
            break;
            case 4: modifierQuantite(n); 
            break;
            case 5: supprimerLivre(&n); 
            break;
            case 6: printf("Nombre total de livres: %d\n", n); 
            break;
            default: printf("Option invalide!\n"); 
            break;
        }
    } while(choix != 0);

    return 0;
}