#include <stdio.h>
/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.*/
int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0)
    {
        printf("Le nombre %d est pair.\n", nombre);
    } else {
        printf("Le nombre %d est impair.\n", nombre);
    }

    return 0;
}
