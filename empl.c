#include<stdio.h>
int main()
{
    int N,M,A,k=0,s,t,c=0,i,j,count=0;
    scanf("%d %d %d",&N,&M,&A);
    int B[M][2],C[N-1],S[N];
    for(i=0;i<M;i++)
{
    for(j=0;j<A;j++)
    {
        scanf("%d\t",&B[i][j]);
       
    }
}
for(i=0;i<N;i++)
{
    scanf("%d",&S[i]);
}
for(i=0;i<N;i++)
{
    t=i;
    for(j=0;j<2;j++)
    {
        s=j;
        if(B[i][j]==A&&j==0)
        {
            C[k]=B[i][j+1];
            k++;
            for(i=0;i<N;i++)
            {
                for(j=0;j<2;j++)
                {
                    if(B[i][j]==B[t][s+1]&&j==0)
                    {
                        C[k]=B[i][j+1];
                        k++;
                    }
                }
            }
        }
        j=s;
    }
    i=t;
}
for(i=0;i<k;i++)
{
    if(S[A-1]>S[C[i]-1])
    {
        count++;
    }
}
printf("%d",count);

   
}
