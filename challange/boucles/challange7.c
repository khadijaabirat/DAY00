#include <stdio.h>

int main() {
   int  n,f;
    printf("Entrez  un nombre : ");
    scanf("%d", &n);
    f=0;
while(n!=0){
    f=f*10+n%10;
    n= n/10;
 } 
  printf("%d ",f);
 return 0;
}