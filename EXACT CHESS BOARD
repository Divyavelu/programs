
#include<stdio.h>
int main()
{
    int a[8][8],i=0,j=0,k,t=0,s=0,x,c[8]={1,2,3,4,5,6,7,8};
    char b[100];
     scanf("%[^\n]",&b);
    for(k=0;k<100;k++)
    {
        if(b[k]=='/')
        {
            i++;
            t=0;
        }
        else if(64<b[k])
        {
            a[i][t]=b[k];
            t++;
        }
        else
        {
      x=b[k]-'0';
      
         for(j=0;j<x;j++)
               {
                   s=t+j; 
                   a[i][s]='\0';
               }
               t=t+j;
             
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
