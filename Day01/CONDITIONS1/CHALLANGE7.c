#include <stdio.h>
/*Challenge 7 : Alphabet Majuscule
�crivez un programme pour v�rifier si le caract�re donn� est un alphabet majuscule
ou non en utilisant l'instruction conditionnelle if-else.
Les lettres majuscules vont de 'A' � 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90.
 Si la valeur ASCII d'un caract�re est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.*/
int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("%c est une lettre majuscule.\n", c);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", c);
    }

    return 0;
}
