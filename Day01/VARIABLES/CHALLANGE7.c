#include <stdio.h>
/*Challenge 7 : Moyenne pond�r�e de trois nombres
�crivez un programme en C pour calculer la moyenne pond�r�e de trois nombres
donn�s par l'utilisateur avec les pond�rations suivantes :

1er nombre : pond�ration 2
2�me nombre : pond�ration 3
3�me nombre : pond�ration 5*/
int main() {
    int n1, n2, n3;
     float moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);
    printf("Entrez le deuxi�me nombre : ");
    scanf("%d", &n2);
    printf("Entrez le troisi�me nombre : ");
    scanf("%d", &n3);

    moyenne = (n1*2 + n2*3 + n3*5) / (2 + 3 + 5);

    printf("La moyenne pond�r�e est : %.2f\n", moyenne);

    return 0;
}
