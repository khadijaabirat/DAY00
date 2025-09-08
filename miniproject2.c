#include <stdio.h>
#include <string.h>

#define MAX 100  // تحديد حجم المصفوفة

struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};

int nombreContacts = 0;
struct Contact lescontacts[MAX];

void ajouterContact() {
    if(nombreContacts >= MAX) {
        printf("L'espace est plein !\n");
        return;
    }
    printf("Entrez le nom: ");
    scanf(" %49[^\n]", lescontacts[nombreContacts].nom);
    printf("Entrez le numéro de téléphone: ");
    scanf(" %19[^\n]", lescontacts[nombreContacts].telephone);
    printf("Entrez l'email: ");
    scanf(" %49[^\n]", lescontacts[nombreContacts].email);
    nombreContacts++;
    printf("Contact ajouté avec succès !\n");
}

void afficherContacts() {
    if(nombreContacts == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }
    for(int i = 0; i < nombreContacts; i++) {
        printf("\nContact %d:\n", i+1);
        printf("Nom: %s\n", lescontacts[i].nom);
        printf("Téléphone: %s\n", lescontacts[i].telephone);
        printf("Email: %s\n", lescontacts[i].email);
    }
}

void rechercherContact() {
    char nom[50];
    printf("Entrez le nom à rechercher: ");
    scanf(" %49[^\n]", nom);
    for(int i = 0; i < nombreContacts; i++) {
        if(strcmp(lescontacts[i].nom, nom) == 0) {
            printf("Contact trouvé:\n");
            printf("Nom: %s\n", lescontacts[i].nom);
            printf("Téléphone: %s\n", lescontacts[i].telephone);
            printf("Email: %s\n", lescontacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void modifierContact() {
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf(" %49[^\n]", nom);
    for(int i = 0; i < nombreContacts; i++) {
        if(strcmp(lescontacts[i].nom, nom) == 0) {
            printf("Entrez le nouveau numéro de téléphone: ");
            scanf(" %19[^\n]", lescontacts[i].telephone);
            printf("Entrez le nouvel email: ");
            scanf(" %49[^\n]", lescontacts[i].email);
            printf("Contact modifié avec succès !\n");
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

void supprimerContact() {
    char nom[50];
    printf("Entrez le nom du contact à supprimer: ");
    scanf(" %49[^\n]", nom);
    for(int i = 0; i < nombreContacts; i++) {
        if(strcmp(lescontacts[i].nom, nom) == 0) {
            for(int j = i; j < nombreContacts-1; j++) {
                lescontacts[j] = lescontacts[j+1];
            }
            nombreContacts--;
            printf("Contact supprimé avec succès !\n");
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

int main() {
    int choix;
    do {
        printf("\n=== Gestion de Contacts ===\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);
        while(getchar() != '\n'); // nettoyer le buffer

        switch(choix) {
            case 1: ajouterContact(); break;
            case 2: afficherContacts(); break;
            case 3: rechercherContact(); break;
            case 4: modifierContact(); break;
            case 5: supprimerContact(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide !\n"); break;
        }
    } while(choix != 0);

    return 0;
}
