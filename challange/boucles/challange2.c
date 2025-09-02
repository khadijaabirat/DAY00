#include <stdio.h>

int main() {
   int n,i,f;
    printf("Entrez  un nombre : ");
    scanf("%d", &n);
    f=1;
for(i=1;i<=n;i++)
f=f*i;

printf("%d ! = %d  ",n,f);
    return 0;
}