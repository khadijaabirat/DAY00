#include <stdio.h>
/*Challenge 10 : Formatage de la Date
Écrivez un programme C qui lit une date au format 15/09/2012
et l'affiche sous le format suivant : 15-Septembre-2012.*/

int main() {
    int jour, mois, annee;

    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    switch(mois) {
        case 1:  printf("la date est : %d-Janvier-%d\n", jour, annee);
         break;
        case 2:  printf("la date est : %d-Fevrier-%d\n", jour, annee);
        break;
        case 3:  printf("la date est : %d-Mars-%d\n", jour, annee);
        break;
        case 4:  printf("la date est : %d-Avril-%d\n", jour, annee);
         break;
        case 5:  printf("la date est : %d-Mai-%d\n", jour, annee);
        break;
        case 6:  printf("la date est : %d-Juin-%d\n", jour, annee);
        break;
        case 7:  printf("la date est : %d-Juillet-%d\n", jour, annee);
        break;
        case 8:  printf("la date est : %d-Aout-%d\n", jour, annee);
         break;
        case 9:  printf("la date est : %d-Septembre-%d\n", jour, annee);
         break;
        case 10: printf("la date est : %d-Octobre-%d\n", jour, annee);
         break;
        case 11: printf("la date est : %d-Novembre-%d\n", jour, annee);
         break;
        case 12: printf("la date est : %d-Decembre-%d\n", jour, annee);
         break;
        default: printf("Mois invalide !\n"); break;
    }

    return 0;
}
