#include <stdio.h>
int main() {
    int c;
    printf("saisirez la température en Celsius ");
    scanf("%d",&c);
    if (c<0)
      printf("l'état de l'eau est solide");
    else if (0 <= c && c< 100)
    printf("l'état de l'eau est liquide");
else if (c >= 100 )

 printf("l'état de l'eau est gaz");


 
    return 0;
}