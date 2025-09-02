#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1, x2, y2, z2,d;
    printf("Entrez les trois coordonnées du premier pointe : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Entrez les trois coordonnées du deuxième pointe : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);
    printf("%lf", pow(8,6));
    d = sqrt(pow(x2 - x1,  2.0) + pow(y2 - y1, 2.0) + pow(z2 - z1, 2.0));

    printf("La distance entre les deux points est : %.2lf\n", d);

    return 0;
    }