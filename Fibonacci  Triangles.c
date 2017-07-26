#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,k,f=0,l=1,sum=0,i,a[100],c[100],s,count=0;
    float sec;
    scanf("%d",&n);
    a[0]=f,a[1]=l;
    for(i=2;i<=n;i++)
    {
        sum=f+l;
        a[i]=sum;
        f=l;
        l=sum;
    }
    for(i=1;i<=n;i+=2)
    {
        if(a[i]>=5)
        {
            if(a[i]%2 != 0)
            {
                c[i]=a[i];
            }
          
          
        }
      
         
    }
     for(i=1;i<=n;i+=2)
     {
         if(c[i]>n)
         {
         sec=((0.894427191)*c[i]);
          s=round(sec);
          break;
         }
      
     }
     for(i=1;i<=s;i++)
     {
         if(s%i==0)
         {
             count++;
         }
     }
     printf("%d",count);
 
    return 0;
