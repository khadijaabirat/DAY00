#include <stdio.h>
#include <math.h>
/*Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère.
Prenez le rayon de la sphère en entrée de l'utilisateur.
Formule pour le volume d'une sphère :

Volume = (4/3) * π * r³*/
int main() {
    float r, volume;
    float const pi=3.14;

    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * pi * pow(r, 3);

    printf("Le volume de la sphere est : %.2f\n", volume);

    return 0;
}
