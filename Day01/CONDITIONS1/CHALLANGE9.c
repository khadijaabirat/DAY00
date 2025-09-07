#include <stdio.h>
/*Challenge 9 : Vérification d'Alphabet
Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non.
 Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.*/
int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf(" %c", &c);  // espace avant %c pour ignorer ENTER

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c est une lettre majuscule.\n", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c est une lettre minuscule.\n", c);
    }
    else {
        printf("%c n'est pas une lettre.\n", c);
    }

    return 0;
}
