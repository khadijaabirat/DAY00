#include <stdio.h>
/*Challenge 4 : Conversion de la vitesse
�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h)
 et la transforme en m�tres par seconde (m/s). Formule :

m/s = km/h * 0.27778 */
int main() {
    float kmh, ms;

    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("%.2f km/h = %.2f m/s\n", kmh, ms);

    return 0;
}
