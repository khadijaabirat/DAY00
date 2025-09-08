  
    #include <stdio.h>
    #include <math.h>

int main() { 
    double volume,r;
    double  p=3.14;
    printf("Entrez  le rayon de la sphère :");
    scanf("%lf", &r);
    volume = (4/3) * p* pow(r,p);
    printf("le volume de sphère est : %.2f ",volume);
    return 0;
}