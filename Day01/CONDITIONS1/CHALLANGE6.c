#include <stdio.h>
/*Challenge 6 : Positif, N�gatif ou Nul
�crivez un programme pour v�rifier si le nombre donn� est positif,
 n�gatif ou nul. Si le nombre est inf�rieur � z�ro,
 alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro, alors le nombre est positif.
Si les deux conditions sont fausses, le nombre est �gal � z�ro.*/
int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0) {
        printf("%d est un nombre positif.\n", nombre);
    }
    else if (nombre < 0) {
        printf("%d est un nombre negatif.\n", nombre);
    }
    else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
