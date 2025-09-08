#include <stdio.h>
/*Challenge 11 : Surface d'un rectangle
Écrivez un programme pour trouver la surface d'un rectangle.
 Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :

Surface = longueur * largeur*/
int main() {
    float longueur, largeur, surface;

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    surface = longueur * largeur;

    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
