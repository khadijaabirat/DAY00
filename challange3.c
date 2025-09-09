#include <stdio.h>

int main()
 {
    float tab[]={4,8,2,9,1,0};
    int n=0,i,j,out=0;
    for (i=0;i<6;i++)
    {  n=0;
        for (j=0;j<6;j++)
        { 
            if(tab[i]==tab[j])
            {
                n++;
            }
        }
        
    
        if (n==1)
        {
            out++;
        }
        
     }
    
    printf("output est: %d",out);

    return 0;
}