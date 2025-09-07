#include <stdio.h>
/*Challenge 12 : Comparaison d'Instants
Écrivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche un des messages suivants :

Le premier instant vient avant le deuxième ;
Le deuxième instant vient avant le premier ;
Il s'agit du même instant.
*/
int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le deuxième instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxième.\n");
    }
        else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxième instant vient avant le premier.\n");
    }
    else {
        printf("Il s'agit du même instant.\n");
    }

    return 0;
}
