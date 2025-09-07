#include <stdio.h>
/*Challenge 5 : Conversion d'Ann�e
�crivez un programme C pilot� par menu pour convertir une ann�e donn�e en :

Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicit�, n'incluez pas l'ann�e bissextile (sauf si vous �tes courageux pour le faire).
 1 an = 365 jours, 1 mois = 30 jours.*/
int main() {
    int annee, choix;
    int mois, jours;
    int heures, minutes, secondes;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    printf("===== Menu =====\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d ann�e(s) = %d mois\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d ann�e(s) = %d jours\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d ann�e(s) = %ld heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d ann�e(s) = %ld minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365L * 24 * 60 * 60;
            printf("%d ann�e(s) = %ld secondes\n", annee, secondes);
            break;
        default:
            printf("Choix invalide !\n");
    }

    return 0;
}
