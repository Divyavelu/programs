
#include<stdio.h>

int main()
{
int i,j,n,a=0,count,b=0,c=0;
scanf("%d",&n);
char *arr[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
char *(*ptr)[26] = &arr;

for(i=0;i<26;i++)
{
    for(j=1;j<10000;j++)
    {
          printf("TN%02d%s%04d    ",n,(*ptr)[i],j);
          b++;
    }printf("\n");
}
while(a<26)
{
    for(i=0;i<26;i++)
    {
        for(j=1;j<10000;j++)
        {
            printf("TN%02d%s%s%04d    ",n,(*ptr)[a],(*ptr)[i],j);
            c++;
        }printf("\n");
    }
    a++;
}
printf(" count =%d ,%d",(b+c),b);
return 0;
}
