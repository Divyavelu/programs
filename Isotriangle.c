#include <stdio.h>
#include <math.h>
void main()
{
    int n,i,j,c=0,ar[3],k,even,fact=0,m;
    float a;
    scanf("%d",&n);
    for(i=n;i<50000;i++)
    {
        a=sqrt(((i+1)*(i+1))+((i+2)*(i+2)));
        for(j=n;j<50000;j++)
        {
            if(a==j)
            {
            while(c<1)
            {
              ar[0]=i+1;
              ar[1]=i+2;
              ar[2]=j;
                c++;
          
            }
            }
          
        }
    }
    for(k=0;k<=2;k++)
    {
        if(ar[k]%2==0)
    {
        even=ar[k];
    }
    }
    for(m=1;m<=even;m++)
    {
        if(even%m==0)
        {
            fact++;
        }
    }
    printf("%d",fact);
}
