#include <stdio.h>
/*Challenge 1 : Affichage Informations
�crivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, pr�nom, �ge, sexe, et adresse email.
 Les donn�es sont saisies � partir du clavier.*/
int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];

    printf("Entrez le nom : ");
    scanf("%s", nom);

    printf("Entrez le prenom : ");
    scanf("%s", prenom);

    printf("Entrez l age : ");
    scanf("%d", &age);

    printf("Entrez le sexe (Homme/Femme) : ");
    scanf("%s", sexe);

    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    printf("----- Ton Informations -----");
    printf("Nom       : %s\n", nom);
    printf("Prenom    : %s\n", prenom);
    printf("Age       : %d\n", age);
    printf("Sexe      : %s\n", sexe);
    printf("Email     : %s\n", email);

    return 0;
}

