#include <stdio.h>
#include <math.h>
/*Challenge 4 : Equation du Deuxième Degré
Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré*/
int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Entrez la valeur de a : ");
    scanf("%f", &a);
    printf("Entrez la valeur de b : ");
    scanf("%f", &b);
    printf("Entrez la valeur de c : ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("Deux solutions : x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Une seule solution : x = %.2f\n", x1);
    }
    else {
        printf("Pas de solutions.\n");
    }

    return 0;
}
