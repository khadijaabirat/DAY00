#include <stdio.h>

int main() {
   int n,s,f;
    printf("Entrez  un nombre : ");
    scanf("%d", &n);
while(s<1){
s= n/10;
f=n%10;
f=f*10+s%10;

printf("%d",f);
 } return 0;
}