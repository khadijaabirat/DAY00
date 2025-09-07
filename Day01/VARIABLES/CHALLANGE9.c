#include <stdio.h>
#include <math.h>
/*Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/
int main() {
    float x1, y1, z1, x2, y2, z2, distance;

    printf("Entrez les coordonnées du premier point (x1 y1 z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Entrez les coordonnées du deuxième point (x2 y2 z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
