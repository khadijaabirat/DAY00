#include <stdio.h>
/*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non
en utilisant l'instruction switch case.*/
int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf(" %c", &c);
    switch (c) {
        case 'a': printf("%c est une voyelle.\n", c);
            break;
        case 'e': printf("%c est une voyelle.\n", c);
            break;
        case 'i': printf("%c est une voyelle.\n", c);
            break;
        case 'o': printf("%c est une voyelle.\n", c);
            break;
        case 'u': printf("%c est une voyelle.\n", c);
            break;
        case 'A': printf("%c est une voyelle.\n", c);
            break;
        case 'E': printf("%c est une voyelle.\n", c);
            break;
        case 'I': printf("%c est une voyelle.\n", c);
            break;
        case 'O': printf("%c est une voyelle.\n", c);
            break;
        case 'U':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }

    return 0;
}
