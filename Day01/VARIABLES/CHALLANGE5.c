#include <stdio.h>
/*Challenge 5 : Affichage Temp�rature
�crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau
 � cette temp�rature (solide, liquide, gaz). R�gle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
int main()
 {
    float celsius;

    printf("Entrez la temp�rature en Celsius : ");
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
