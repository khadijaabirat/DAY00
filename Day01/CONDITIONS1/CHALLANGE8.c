#include <stdio.h>
/*Challenge 8 : Mention Obtenue
Nous d�sirons afficher la mention obtenue par un �l�ve en fonction de la moyenne de ses notes.
 S�il a une moyenne strictement inf�rieure � 10, il est recal�.
  S�il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
   S�il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien.
    S�il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
    S�il a une moyenne sup�rieure � 16 (inclus) il obtient la mention tr�s bien.
 �crire les instructions n�cessaires.*/
int main() {
    float moyenne;

    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);

     if (moyenne < 10)
      {
        printf("Recal�.\n");
    }
    else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable.\n");
    }
    else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez Bien.\n");
    }
    else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien.\n");
    }
    else if (moyenne >= 16) {
        printf("Mention : Tr�s Bien.\n");
    }

    return 0;
}
