#include<stdio.h>
#include<math.h>

void main(void)
{
     double SUM=0,m,n=1000;
    
    for(m=0;m<=n;m+=1)
    {
        SUM=SUM+pow(-1,m)/(2*m+1);
    }
    
    printf("SUM=%lf π/4=%lf",SUM,M_PI/4);
}

