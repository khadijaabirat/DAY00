  
    #include <stdio.h>

int main() {
    int n1, n2, n3 ,p1,p2 ,p3;
    float m;
    p1 = 2;
    p2 = 3;
    p3 = 5;
    printf("Entrez le 1er nombre : ");
    scanf("%d", &n1);

    printf("Entrez le 2ème nombre : ");
    scanf("%d", &n2);

    printf("Entrez le 3ème nombre : ");
    scanf("%d", &n3);

    m = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("La moyenne pondérée est : %.2f ",m);
    return 0;
}