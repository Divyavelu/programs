#include <stdio.h>
#include <math.h>
int main()
{
    int a[50],i,j=0,b[50],r,sd=0,n,count=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sd=0;
        while(a[i]>0)
        {
           r= a[i]%6;
           sd=sd+r;
           a[i]=a[i]/6;
        }
        b[i]=sd;
    }
    for(i=0;i<n-1;i++)
    {
   for(j=i+1;j<n;j++)
   {
       if(b[i]>b[j])
       {
           count++;
       }
   }
       }
    printf("%d",count);
}
