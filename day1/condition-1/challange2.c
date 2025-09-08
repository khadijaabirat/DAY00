#include <stdio.h>

int main() {
    char c;

    printf("Veuillez saisir un caractère : ");
    scanf(" %c", &c);
    switch (c) {
        case 'a':
        printf("%c est une voyelle.\n", c);
        break;
        case 'e':
        printf("%c est une voyelle.\n", c);
        break;
        case 'i':
        printf("%c est une voyelle.\n", c);
        break;
        case 'o':
        printf("%c est une voyelle.\n", c);
        break;
        case 'u':
        printf("%c est une voyelle.\n", c);
        break;
        default:
        printf("%c n'est pas une voyelle c'est une consonne.\n", c);
         break; 
    }
    return 0;
}
    
