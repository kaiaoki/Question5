#include<stdio.h>
#include<math.h>

void main(void)
{
    double SUM=0,m,n=1000;
    
    for(m=1;m<=n;m+=1)
    {
        SUM=SUM+pow(-1,m-1)/m;
    }
    
    printf("SUM=%lf log2=%lf",SUM,log(2));
}
