#include <stdio.h>

int main()
 {
    float tab[500];
    int n,i,j;
    float s;
    printf("saisirez le nombre des achats:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
   {
    printf("saisirez le %d prix:",i+1);
    scanf("%f",&tab[i]);
   }
    j=0;
    s=0;
    for (i=0;i<n;i++)
    {
    s=s+tab[i]-tab[i]*j/100;
    j=j+2;

    }
    printf("le prix finale est: %.2f",s);

    return 0;
}