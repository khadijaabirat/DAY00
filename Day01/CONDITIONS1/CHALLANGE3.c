#include <stdio.h>
/*Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données.
Si les deux valeurs sont identiques,
 le programme doit renvoyer le triple de leur somme.*/
int main() {
    int a, b, somme;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);

    if (a == b)
     {
        somme = (a + b) * 3;
    } else {
        somme = a + b;
    }

    printf("Le résultat est : %d\n", somme);

    return 0;
}
