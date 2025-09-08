#include <stdio.h>
/*Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier.
Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/

int main() {
    float a, b;

    printf("Entrez le premier nombre  : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0)
     {
        printf("a / b = %.2f\n", a / b);
    } else
    {
        printf("Division par zéro impossible.\n");
    }

    return 0;
}
