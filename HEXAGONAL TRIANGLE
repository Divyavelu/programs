#include<stdio.h>
int main() {
 long int T1,T2,M,i,j,temp,c=0,T,h,s;
  s=scanf("%ld %ld %ld",&T1,&T2,&M);
  if(s==3&&T1>0&&T2>T1&&T2<1000000)
  {
  for(i=1;i<T1/2&&c<M;i++)
  {
      h=i*(2*i-1);
      if(h>=T1&&h<=T2)
      {
      for(j=i;j<=T1;j++)
      {
          T=(j*(j+1))/2;
          if(T==h)
          {
              c++;
          }
      }
      }
  }
  if(c==M)
  {
      printf("%ld",h);
  }
  else
  {
      printf("No number is present at this index");
  }
  }
  else
  {
      printf("Invalid input");
  }
  }
