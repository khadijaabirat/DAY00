#include <stdio.h>
/*Challenge 3 : Conversion de la distance
�crivez un programme qui demande la distance en kilom�tres et la transforme en yards. Formule :

Yards = Km * 1093.61  */
int main() {
    float km, yards;
    printf("Entrez la distance en kilometres : ");
    scanf("%f", &km);

    yards = km * 1093.61;

    printf("%.2f kilometres = %.2f yards\n", km, yards);

    return 0;
}
