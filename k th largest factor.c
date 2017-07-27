#include<stdio.h>
void main()
{
    int N,k,i,j=1;
    int ar[10];
    printf("Enter the values:");
    scanf("%d %d",&N,&k);
    for(i=N;i>=1;i--)
    {
        if(N%i==0)
        {
          ar[j]=i;
             j++;
         }
    }
    if(k<j)
    {
        printf("%d",ar[k]);
    }
    else
    printf("1");
}
