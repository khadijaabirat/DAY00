#include <stdio.h>
/*Conducteur de moins de 25 ans : Prime de base * 1.5
Conducteur de 25 à 65 ans : Prime de base
Conducteur de plus de 65 ans : Prime de base * 1.2
Type de voiture sportive : Prime * 2
Type de voiture utilitaire : Prime * 1.2
Type de voiture familiale : Prime * 1.1
Nombre d'accidents > 1 : Ajoutez 30% à la prime*/

int main() {
   int a,t,n,pa,pt,pf;
    int const pb=12000; 
    printf("Entrez Âge du conducteur (en années) : ");
    scanf("%d", &a);
    if (a<25)
    pa=pb*1.5;
    else if (a>=25 && a<=65)
    pa= pb;
    else if(a>65)
    pa=pb*1.2;
    
    do
    { 
        printf("Entrez Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
        scanf("%d", &t);
        switch (t) 
        {
            case 1:
            pt=pa*2;
            break;
            case 2:
            pt=pa*1.2;
            break;
            case 3:
            pt=pa*1.1;
            break;
            
            default:
            printf("%d n'est pas un valeur indiqué.\n", t);
            break; 
        }
    } while(t<1 && t>3);
        
         
    printf("Entrez Nombre d'accidents au cours des 5 dernières années : ");   
    scanf("%d", &n);
    if (n>1)
    pf=pt*0.3+pt;
    else pf=pt;
    printf("le prime finale est : %d",pf);
    return 0;
}