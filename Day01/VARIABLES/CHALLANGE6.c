#include <stdio.h>
/*Challenge 6 : Calcul et affichage des r�sultats
Deux nombres r�els, a et b, sont saisis au clavier.
Calculez et affichez a + b, a - b, a * b, et a / b avec pr�cision d�cimale.*/

int main() {
    float a, b;

    printf("Entrez le premier nombre  : ");
    scanf("%f", &a);
    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    if (b != 0)
     {
        printf("a / b = %.2f\n", a / b);
    } else
    {
        printf("Division par z�ro impossible.\n");
    }

    return 0;
}
