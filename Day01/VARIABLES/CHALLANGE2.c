#include <stdio.h>
/*Challenge 2 : Conversion de la temp�rature
�crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15 */
int main() {
    float celsius, kelvin;

    printf("Entrez la temp�rature en Celsius : ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);

    return 0;
}
