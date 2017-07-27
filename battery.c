#include<stdio.h>
#include<string.h>
int main()
{
    char a[24];
    float charge=100,l,de;
    int i;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        de=0;
        if(a[i]=='O')
        {
            charge=charge-1;
        }
        else if(a[i]=='B')
        {
            de=(100-charge)/10;
            if(de<2)
            {
                de=2;
            }
            de=2*de;
            charge=charge-de;
        }
        else
        {
             de=(100-charge)/10;
            if(de<2)
            {
                de=2;
                 charge=charge-de;
            }
        }
    }
    printf("%.2f",charge);
    
}
