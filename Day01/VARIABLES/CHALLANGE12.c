#include <stdio.h>
/*Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle.
Par exemple, si le nombre entier est 1234, son inverse est 4321.*/
int main() {
    int nombre, inverse;
    int chiffre1, chiffre2, chiffre3, chiffre4;

    printf("Entrez un nombre entier a 4 chiffres : ");
    scanf("%d", &nombre);

    chiffre1 = nombre / 1000;
    chiffre2 = (nombre / 100) % 10;
    chiffre3 = (nombre / 10) % 10;
    chiffre4 = nombre % 10;

    inverse = chiffre4 * 1000 + chiffre3 * 100 + chiffre2 * 10 + chiffre1;

    printf("Le nombre inverse est : %d\n", inverse);

    return 0;
}
