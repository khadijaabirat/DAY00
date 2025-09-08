#include <stdio.h>
#include <string.h>
#define MAX 100  

struct Contact
 {
    char nom[MAX];
    char telephone[MAX];
    char email[MAX];
};

int nombreContacts = 0;
struct Contact lescontacts[MAX];

void ajouterContact()
 {
    printf("Entrez le nom: ");
    fgets(lescontacts[nombreContacts].nom, MAX, stdin);

    printf("Entrez le numéro de téelephone: ");
    fgets(lescontacts[nombreContacts].telephone, MAX, stdin);

    printf("Entrez l'email: ");
    fgets(lescontacts[nombreContacts].email, MAX, stdin);

    getchar(); 

    nombreContacts++;
    
    if(nombreContacts >= MAX) 
    {
        printf("L'espace est plein !\n");
        return;
    }
}
void modifierContact()
 {
    char modiffiernom[MAX];

    printf("Entrez le nom du contact que vous voullez modifier: ");
    fgets(modiffiernom, MAX, stdin);

    for(int i = 0; i < nombreContacts; i++)
    {
        if(strcmp(lescontacts[i].nom, modiffiernom) == 0) 
        {
            printf("Entrez le nouveau numero de telephone: ");
            scanf(" %s", lescontacts[i].telephone);
            printf("Entrez le nouvel email: ");
            scanf(" %s", lescontacts[i].email);
            return;
        }
    }
    printf("ce contact ne trouve pas");
}
void supprimerContact()
 {
    char recherchenom[MAX];
    printf("Entrez le nom du contact que vous voullez supprimer: ");
    scanf(" %s",recherchenom);
    for(int i = 0; i < nombreContacts; i++) 
    {
        if(strcmp(lescontacts[i].nom, recherchenom) == 0) 
        {
            for(int j = i; j < nombreContacts-1; j++) 
            {
                lescontacts[j] = lescontacts[j+1];
            }
            nombreContacts--;
            return;
        }
    }
    printf("ce contact ne trouve pas.");
}

void afficherContacts()
 {
    for(int i = 0; i < nombreContacts; i++)
    {
        printf("le contact %d:\n son nom est: %s \n son telephone est: %s \n son email est: %s\n", i+1,lescontacts[i].nom,lescontacts[i].telephone,lescontacts[i].email);
    }
    if(nombreContacts == 0) 
    {
        printf("pas de contact");
        return;
    }
}

void rechercherContact() 
{
    char nom[MAX];
    printf("Entrez le nom de contact que vou voullez rechercher: ");
    scanf("%s", nom);
    for(int i = 0; i < nombreContacts; i++)
     {
        if(strcmp(lescontacts[i].nom, nom) == 0) 
        {
            printf("le Contact est:\n Nom: %s\n Telephone: %s\n Email: %s\n",lescontacts[i].nom,lescontacts[i].telephone,lescontacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}




int main() 
{
    int choix;
    do {
        printf("---- Gestion de Contacts ----\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("Choisissez une option:");
        scanf("%d", &choix);
        getchar();
        switch(choix) 
        {
            case 1: ajouterContact();
            break;
            case 2: afficherContacts(); 
            break;
            case 3: rechercherContact(); 
            break;
            case 4: modifierContact(); 
            break;
            case 5: supprimerContact(); 
            break;
            default: printf("ton choix invalide !\n"); 
            break;
        }
    } while(choix != 0);

    return 0;
}
