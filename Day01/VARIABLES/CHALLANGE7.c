#include <stdio.h>
/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres
donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5*/
int main() {
    int n1, n2, n3;
     float moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &n2);
    printf("Entrez le troisième nombre : ");
    scanf("%d", &n3);

    moyenne = (n1*2 + n2*3 + n3*5) / (2 + 3 + 5);

    printf("La moyenne pondérée est : %.2f\n", moyenne);

    return 0;
}
