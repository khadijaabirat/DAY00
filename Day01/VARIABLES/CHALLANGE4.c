#include <stdio.h>
/*Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h)
 et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778 */
int main() {
    float kmh, ms;

    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("%.2f km/h = %.2f m/s\n", kmh, ms);

    return 0;
}
