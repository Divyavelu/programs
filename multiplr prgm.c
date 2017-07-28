ROCK SAMPLES
#include <stdio.h>
int main(void)
 {
    int s,r,a[200],i,t1,t2,c=0;
    scanf("%d %d",&s,&r);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    while(r>0)
    {
    c=0;
    scanf("%d %d",&t1,&t2);
    for(i=0;i<s;i++)
    {
    if((a[i]>t1)&&(a[i]<t2))
    {
        c++;
    }
    }
    printf("%d\n",c);
    r--;
    }
    return 0;
}
TIME PERIOD
#include<stdio.h>
int main()
{   int num1, num2, i, j, flag, temp, count = 0,prime[349],k=1,p,l,valid[349],z=0,hmin,hmax,mmin,mmax,input;
    scanf("%d",&input);
  num1=2,num2=2359;                           //to generate prime number upto 2359
    temp =num1 ;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            prime[0]=2;
            prime[k]=i;
            k++;
            count++;
        }
    }//printf("%d ",count);      // count to know total no. of prime number in the range
l=0;
for(i=0;i<349;i++)
{p=prime[i]%100;
if(p<60)
{valid[l]=prime[i];
l++;                                    //l value to know total valid prime  numbers
}
}
for(i=0;i<210;i++)
{
    for(j=i+1;j<210;j++)
    {
        if(valid[j]-valid[i]==input)
        {hmin=valid[i]/100;                        
        mmin=valid[i]%100;                          
       hmax=valid[j]/100;                          
        mmax=valid[j]%100;                          

            printf("%02d:%02d -%02d:%02d",hmin,mmin,hmax,mmax);
                z=z+1;
        return 0;
        }
    }
}
if(z==0)
{printf("NONE");
}
 }
INVERSION
#include<stdio.h>
int main()
{
    int n;
    printf("ENter ur no to want to get");
    scanf("%d",&n);
 int a[n],i,c=0,b[n],j;
 int count=0;

 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);

 }
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);

 }
 for(j=0;j<=n;j++)
 {c=0;
 for(i=1;i<=a[j];i++)
 {
     if(a[j]%i==0)
     {
         c++;
     }

 }
 b[j]=c;}
 for(i=0;i<n;i++)
 {
 printf("\n %d",b[i]);
 }
 for(i=0;i<n;i++)//loop to find a set combination
 {
     for(j=i;j<n;j++)
     {
       if(b[i]>b[j])
       {
           count++;
       }
     }
 }
 printf("\ncount=%d",count);//set count
return 0;



} 
BANK VAULT

                Zombies
#include <stdio.h>

int main()
{
    int b,n,zi;
   
   //scanf("%c",&a);
       scanf("%d ",&zi);

    if(isalpha(zi))
    printf("invalid input");
    else
    {
          
 scanf("%d %d ",&b,&n);
    for(int i=0;i<n;i++)
{
    b=b-(zi%2)-(zi/2);
}
if(b>0)
printf("\n yes");
else
printf("\n no");

}
return 0;
}



      Tamn and bday

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin >> t;
while (t--)
{
long long b, w, x, y, z;
cin >> b >> w >> x >> y >> z;
long long ans1 = (b + w) * x + w * z;
long long ans2 = (b + w) * y + b * z;
long long ans3 = b * x + w * y;
long long ans = min(min(ans1, ans2), ans3);
cout << ans << endl;
}
return 0;
}

Tamn and bday   (another method)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long  x,y,z,w,b,a,t,i;
     scanf("%lu",&t);
    for(i=0;i<t;i++)
    {
       
    scanf("%lu %lu\n",&b,&w);
    scanf("%lu %lu %lu",&x,&y,&z);
    a=(b*(min(x,y+z))+w*(min(y,x+z)));
    printf("%lu\n",a);}
    return 0;
}
min(long n1,long n2)
{   unsigned long n3,z;
    n3=z;
    n2=n2+n3;
    return(n1>n2)?n2:n1;
}





Fusion

#include <stdio.h>
int energy[1000][1000];
int atom[1000][1000];
int a[1000];
int main()
{
int n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
atom[i][i] = a[i];
}
for(int j = 1 ; j < n ; j++)
{
for(int i = 0 , k = j ; i < n && k < n ; i++,k++)
{
for(int l = i , r = i + 1 ; r <= k ; r++,l++)
{
if(energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k] >= energy[i][k])
{
energy[i][k] = energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k];
atom[i][k] = (atom[i][l] * atom[r][k]) % 199;
}
}
}
}
printf("%d\n",energy[1][n-1]);
return 0;
}

Zombie (yes and no)

#include <stdio.h>
int main()
{  
    int b,n,i,zi; 
 scanf("%d %d ",&b,&n);
    for(int i=0;i<n;i++)
{
    scanf("%d ",&zi);
    b=b-(zi%2)-(zi/2);
}
if(b>0)
printf("\n yes");
else
printf("\n no");
return 0;
}


Vehicle regn

#include<stdio.h>
int main()
{
    int i,j=0,k,x;
    int h=0;
    scanf("%d",&x);
    if(x==01)
    {
    {
    for(i=0;i<26;i++)
    {
        for(j=1;j<=9999;j++)

            printf("TN 01 %c %04d\n",'A'+i,j);
            h++;
    }

}
for(i=65;i<=90;i++)
    {
     for(j=65;j<=90;j++)
     {
           for(k=1;k<=9999;k++)
{
    printf("TN 01 %c%c %04d \n ",i,j,k);
    h++;
    }}}}
    else{
        printf("enter the valid number");
    }
    printf("%d",h);
return 0;
}

Vehicle regn (another method)

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
Xmas tree

#include<stdio.h>
int main()
{
 int i,j,k,n,p,q,s,t;
 scanf("%d",&n);
  for(i=0;i<n+1;i++)
  {
   for(j=i;j<n;j++)
   {
    printf(" ");
   }
   for(k=0;k<=(2*i);k++)
   {
    printf("*"); 
   }
   printf("\n");
  }
  if(n>2)
  {
   for(s=0;s<n-1;s++)
   {
    for(p=s;p<n-1;p++)
    {
     printf(" ");    
    }
    for(q=0;q<(2*(s+2))-1;q++)
    {
     printf("*");
    }
    for(p=s;p<n-1;p++)
    {
     printf(" ");    
    }
    printf("\n");  
   }
   for(t=0;t<n-3;t++)
   {
    for(s=0;s<n-2;s++)
    {
     for(p=s;p<n-1;p++)
     {
      printf(" ");    
     }
     for(q=0;q<(2*(s+2))-1;q++)
     {
      printf("*");
     }
     for(p=s;p<n-1;p++)
     {
      printf(" ");    
     }
     printf("\n"); 
    } 
   }
  }
  for(p=0;p<2;p++)
  {
   for(q=0;q<n;q++)
   {
    printf(" ");
   }
   printf("*");
   for(q=0;q<n;q++)
   {
    printf(" ");
   }  
   printf("\n"); 
  }
 return 0;
}


Xmas tree(another method)

1 #include<stdio.h>
 2 
 3 void main()
 4 {
 5     int rows,starNo,spaceNo;
 6     printf("Enter Rows:\n");
 7     scanf("%d",&rows);
 8 
 9     for(int i=1;i<=rows;i++)
10     {
11         starNo=i*2-1;
12         spaceNo=i+rows-starNo;
13         for(int j=0;j<spaceNo;j++)
14         {
15             printf("%c",' ');
16         }
17         for(int k=0;k<starNo;k++)
18         {
19             printf("%c",'*');
20         }
21         printf("\n");
22     }
23 
24     for(int l=0;l<3;l++)
25     {
26         for(int m=0;m<(rows*2+1)/2;m++)
27         {
28             printf("%c",' ');
29         }
30         printf("&c\n"'*');
31      }


Xmas tree (another method)

int main()
{
      int limit = 30, temp;  
      int i, j;
      printf("\n");
      temp = limit/4;
      for(i = 1; i <= limit/4; i++)
      {
            printf("\t\t  ");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }               
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      temp = limit/3;
      for(i = 3; i <= limit/3; i++)
      {
            printf("\t     ");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      temp = limit/2;
      for(i = 4; i <= limit/2; i++)
      {
            printf("\t");
            for(j = 1; j < temp; j++)
            {
                  printf(" ");
            }
            temp--;
            for(j = 1; j <= 2*i-1; j++)
            {
                  printf("*");
            }
            printf("\n");
      }


(another method)



#include<stdio.h>
int main()
{
    int in[100],N,gap1,gap2,cen,line,top,str=1,i,j,k,t;
    printf("Enter your input:\n");
    scanf("%d",&N);
    if(N<=1)
 {
  printf("You cannot generate christmass tree");
 }
 else if(N>=20)
 {
  printf("Tree is no more");
 }
 if(N<20&&N!=1)
 {
    top=N+1;cen=N-1;gap1=N;gap2=N-1;line=(N*2)-1;
        for(i=0;i<top;i++)
        {
        for(j=0;j<gap1;j++)
        {
            printf(" ");
        }
        gap1--;
        for(k=0;k<str;k++)
        {
            printf("*");
        }
        str=str+2;
        printf("\n");
        }
        for(t=0;t<N-2;t++)
        {
        str=3;
        for(i=0;i<cen;i++)
        {
        for(j=0;j<gap2;j++)
        {
            printf(" ");
        }
        gap2--;
        for(k=0;k<str;k++)
        {
            printf("*");
        }
        str=str+2;
        printf("\n");
        }
        cen--;
        gap2=N-1;
        }
        for(i=0;i<2;i++)
        {
          for(k=0;k<N;k++)
          {
              printf(" ");
          }
          for(k=0;k<1;k++)
          {
              printf("*");
          }
          printf("\n");
        }
 }
    return 0;
}

Stone game  (one four)

#include
int main()
{
int T,n,i,j,count;
scanf(“%d”,&T);
while(T–){
scanf(“%d”,&n);
count=0;
for(i=1;i<=n;i++)
{
scanf("%d",&j);
if(i==j) ++count;
}
if(count%2==0) printf("BOB\n");
else printf("ALICE\n");
}
return 0;
}
 

(another method)
#include<stdio.h>

int solve(int N)
    {
        int A,B;
        int a;
        int k;
        A=N/4;
        B=N%4;
        if(B==0)
          return A%2;
        else
        {
          a=0;
          if(A%2)
          {
                for(k=1;k<B;++k)
                    a=++k;
                if(a==B)
                    return 1;
                else
                    return 0;
          }
          else
          {
                for(k=0;k<B;++k)
                    a=++k;
                if(a==B)
                    return 1;
                else
                    return 0;
          }
       }
    }

    int main()
    {
        int T;
        int N;
        int result;
        int i;
        scanf("%d",&T);
        if(T<1||T>1000)
           return 0;
        for(i=0;i<T;i++)
        {
            scanf("%d",&N);
            if(N<1||N>10000)
               return 0;
            result=solve(N);
            if(result)
               printf("Yes\n");
            else
               printf("No\n");
        }
    return 0;
    }


Special array

#include<stdio.h>
void main()
{
int i,j,t,m,x,count;
int a[3],b[3];
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
x=a[i];
count=0;
for(j=0;j<3;j++)
{
m=a[j];
while(m!=x)
{
if(m>x)
{
m=m-1;
count++;
}
else
{
m=m+1;
count++;
}
}
}
b[i]=count;
}
for(i=0;i<2;i++)
{
if(b[i]<b[i+1])
t=b[i];
else
t=b[i+1];
}
printf("%d \n",t);
}



//a+aa+aaa+aaaa
#include <stdio.h>
int main() {
int a,b=0,c=0,d=0,sum                                                                                                                                                                                                                                                                                                                                                                                                            ;
scanf("%d",&a);
b=a+(a*10);
c=b+(a*100);
d=c+(a*1000);
sum=a+b+c+d;
printf("sum=%d",sum);
return 0;
}


Cyclic palindrome
#include <stdio.h>

#include <string.h>

void main()
{
    printf("\n CYCLIC PALINDROME FUNCTION \n");

    char a[100];

    int i,j,x;

    printf("\n ENTER THE STRING: \n");

    gets(a);

    for(i=0;i<strlen(a);i++)
        {
            printf("\n");

            for(j=i+1;j<strlen(a);j++)

            printf("%c",a[j]);

            for(x=0;x<=i;x++)

            printf("%c",a[x]);

        }
}

chess

#include<stdio.h>
int main()
{static char a[10][10],c=0;
static char st[100]; int i,j;
gets(st);
for(i=0;i<8;i++)
{

for(j=0;j<8;j++)
{

  if((st[c]>='a')&&(st[c]<='z'))
     {
         a[i][j]=st[c];
         c++;
         //break;
     }

if((st[c]>=49)&&(st[c]<=57))
{
    int b,k;
    b=st[c]-48;
    for( k=0;k<b;k++)
    {
        a[i][j]=" ";
        j++;

        if(b==8)
        {
          j=8;
        }
    }c++;
}
if((st[c]=='/')||(c==8))
{
 c++;
    j=8;
}

}
printf("%d",c);
}

for(i=0;i<8;i++)
{

    for(j=0;j<8;j++)
    {
        if(a[i][j]=='$')
        {
            printf(" ");
        }
        else
     printf("%c",a[i][j]);
    }
    printf("\n");
}


return 0;
}

Catch 22

#include<stdio.h>
int main() 
{
    int F,B,T,FD,BD,TT,Temp=0;
    scanf("%d %d %d %d %d",&F,&B,&T,&FD,&BD);
    BD=BD+F;
    while(FD>0&&BD>0&&F!=B)
    {
        if(F>B)
        {
            Temp=Temp+F;
            FD=FD-F;
            if(FD>0)
            {
               Temp=Temp+B;
               FD=FD+B;
            }
            else
            {
                Temp=Temp+FD;
            }
           
        }
        else
        {
            Temp=Temp+B;
            BD=BD-B;
            if(BD>0)
            {
                Temp=Temp+F;
                BD=BD+F;
            }
            else
            {
                Temp=Temp+BD+F;
            }
            
        }
    }
    TT=Temp*T;
 
    if(F==B&&F<FD)
    {
        printf("No Ditch");
    }
    else if(F>=FD)
    {
        TT=FD*T;
 

        printf("%d F",TT);
        
    }
    else if(FD<=0)
    {
        printf("%d F",TT);
    }
    else
    {
        printf("%d B",TT);
    }
    return 0;
}

employee

#include<stdio.h>
#include<string.h>
int main()
{

long int a[10],num;int i,k,r;int len;static int c=0;
for(i=0;i<5;i++)
{
scanf("%ld",&a[i]);
}
printf(" Enter a no");
scanf("%ld",&num);
while(num!=0)
{
 num=num/10;
 len++;
}
  for(k=0;k<5;k++)
  {
      for(i=0;i<len;i++)
      {
           {
         r=a[k]/10;
         a[k]=r;

           }
      if(r==num)
         {
        c++;
         }
      }
   }
printf("%d",c);
return 0;
}






#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,N,count=0;
scanf("%d",&n);
int a[n+1][n+1];
char c[n][n];
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d ",&a[i][j]);
}
}
/*for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(c[i][j]=='o')
{
    a[i][j]=0;
}
else
{
    a[i][j]=1;
}
printf("%d ",a[i][j]);
}
printf("\n");
}*/
scanf("%d",&N);
int b[N][N];
for(i=1;i<=n;i++)
{
    a[0][i]=1;
    a[i][0]=1;
    a[n+1][i]=1;
    a[i][n+1]=1;
}
for(i=1;i<=N;i++)

    {
scanf("%d%d",&b[i][i]);
}
for(i=1;i<=N;i++)
{

  {

        if((b[--i][i]&&b[++i][i]&&b[i][--i]&&b[i][++i]))
        {
            count=count+1;
        }
  }
if(count==0)
{
    printf("yes");
}else
{
    printf("no");
}
}



}


Alpha neumaric sorting

#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100][100],temp[100];
   static int l,shift,length,i,k,j,shif,t,num[100],len,z=0;
   scanf("%[^\n]s",a);
   length=strlen(a);
    for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
                l++;
        }//printf("%d\n",l);
        len=(l+1)/2;
        for(i=0;i<100;i++)
        {
            for(j=0;j<10;j++)
                b[i][j]=0;
        }
    for(i=0;i<=len;i++)
        {
            for(j=shif,k=0;((a[j]!=' ')&&(j<length));k++,j++)
            {
            if(((a[j]>=97)&&(a[j]<=122))||((a[j]>=65)&&(a[j]<=90)))
            {
                b[i][k]=a[j];
                b[i][k+1]=' ';
                shift=j+2;
            }

            }num[i]=0;
            for(j=shift,k=0;((a[j]!=' ')&&(j<length));k++,j++)
            {
              if((a[j]>=48)&&(a[j]<=57))
              {
                num[i]=num[i]*10+a[j]-48;
                shif=j+2;

              }
            }
        }
        for(i=0;i<len-1;i++)
        {
            for(j=1;j<len;j++)
            {
                if(strcmp(b[i],b[i+j])>0)
                {

                  strcpy(temp,b[i+j]);
                  strcpy(b[i+j],b[i]);
                  strcpy(b[i],temp);
                }
            }
        }
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(num[i]>num[j])
                {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
                }
            }

        }
        for(i=0;i<len;i++)
        {
            printf("%s ",b[z]);
            printf("%d ",num[i]);
            z++;
        }
     return 0;
    }


                        Trace the rat
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 500
bool dfs( char arr[][N],int s,int e,int ds,int de,bool visited[][N]){
if( s==ds && e==de)
return true;
if( s>4 || e>4)
return false;
visited[s][e]=true;
int r[] = { -1 , 0,0,+1};
int c[] = { 0 , 1,-1,0};
for( int i=0;i<4;i++){
if( !visited[s+r[i]][e+c[i]] && arr[s+r[i]][e+c[i]]=='O' ){
if( (s+r[i])>=0 && s+r[i]<4 && e+c[i]>=0 && e+c[i]<4)
if(dfs( arr,s+r[i],e+c[i],ds,de,visited))
return true;
}
}
visited[s][e]=false;
return false;
}
bool reachable( char arr[][N] , int s,int e , int ds , int de){
bool visited[N][N];
memset(visited,false,sizeof(visited));
if( dfs(arr,s,e,ds,de,visited))
return true;
return false;
}
int main() {
int n;
char arr[N][N];
cin>>n;
int i,j;
for( i=0;i<n;i++){
for(j=0;j<n;j++){
cin>>arr[i][j];
}
}
int q;
cin>>q;
int count=0;
int x,y;
int pair[q][2];
for(i=0;i<q;i++){
cin>>pair[i][0]>>pair[i][1];
}
for( i=1;i<q;i++){
if(reachable( arr , pair[i][0]-1,pair[i][1]-1,pair[i-1][0]-1,pair[i-1][1]-1))
count++;
}
if(count==q-1)
cout<<"YES";
else
cout<<"NO";
return 0;
}


#include<stdio.h>
int main()
{
    int i,j,a[3][3]={{0,0,1},
                     {0,1,0},
                     {0,0,1}};
                     int a,b,k rat=4,flag=1;


        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
printf("\n");
    }
    for(k=0;k<4;k++)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {

                scanf("%d%d",a[i][j]);
                if(a[i][j]==0)
                {
                    flag=0;
                }


            }
        }



      if(a[i])
    }


    if()

    return 0;
}

json pgm
#include<stdio.h>
#include<string.h>
int main()
{
char arr[10000];
int i,length,e=0,m=0,l=0;
scanf("%s",arr);
length=strlen(arr);
if(arr[0]!='{' || arr[length-1]!='}')
e++;
for(i=1;i<length-1;i++)
{
if(arr[i]==':' && arr[i+1]=='[' && (m==0))
{
m++;
}
else if(arr[i]==']' && (m==1))
m--;
else if(arr[i]=='{' && (l==0))
l++;
else if(arr[i]=='}' && (l>0))
l--;
else if(arr[i]==',' && arr[i+1] == '{') continue;
else if(arr[i] == '[') continue;
else
e++;
}
if(e!=0 || m!=0 || l!=0)
printf("-1");
else
printf("1");
return 0;
}

Chocolate
#include<stdio.h>
int main()
{
 int n,a[500],sum=0,i,rem,count=0;
 scanf("%d",&n);
 if((n>=1)&&(n<=25))
 {
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
  sum=sum+a[i];


  if(sum%3==0)
  {
  printf("Yes");
  for(i=0;i<n;i++)
  { rem=a[i]%3;
      if(rem!=0)
      {    count++;
           if(rem==1)
            a[i]=a[i]-1;
          if(rem==2)
            a[i]=a[i]+1;
      }

  }printf(" %d",count/2);
  }
  else
  {
  printf("No");

  }}

  return 0;

}

finding the last digit of the series
#include<stdio.h>
#include<math.h>
int main()
{
    int n,A[100],A1[100],i,j,c,count=0;
    int result=0,final=0,temp=0;
    scanf("%d",&n);
    A[0]=0;
    for(i=0;i<n;i++)
    {
       c=pow(2,i);
       if(c<=n)
       {
           A[i+1]=c;
           count++;
       }
       else
       {
          i=n;
       }
    }
   for(i=0;i<=count;i++)
    {
        for(j=0;j<=n;j++)
        {
    result=result+pow(2,(pow(2,A[i])+(2*j)));
    }
    }
    final=result%10;
    temp=final*final;
    temp=sqrt(temp);
    printf("%d",temp);
    return 0;
}


