#include <stdio.h>
#include <math.h>
/*Challenge 8 : Calcul de la moyenne g�om�trique
�crivez un programme en C pour trouver la moyenne g�om�trique de trois nombres saisis par l'utilisateur.
 Formule :Moyenne g�om�trique = (a * b * c)^(1/3)  */
int main() {
    float a, b, c, moyenne_geom;
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisi�me nombre : ");
    scanf("%f", &c);
    moyenne_geom = pow((a * b * c), 1.0/3.0);
    printf("La moyenne g�om�trique est : %.2f\n", moyenne_geom);

    return 0;
}
