#include <stdio.h>
/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau
 à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
int main()
 {
    float celsius;

    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    if (celsius < 0) {
        printf(" l'eau est solide.\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("l'eau est liquide.\n");
    } else {
        printf("l'eau est gaz.\n");
    }

    return 0;
}
