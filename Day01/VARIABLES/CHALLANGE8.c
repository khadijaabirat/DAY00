#include <stdio.h>
#include <math.h>
/*Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
 Formule :Moyenne géométrique = (a * b * c)^(1/3)  */
int main() {
    float a, b, c, moyenne_geom;
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);
    moyenne_geom = pow((a * b * c), 1.0/3.0);
    printf("La moyenne géométrique est : %.2f\n", moyenne_geom);

    return 0;
}
