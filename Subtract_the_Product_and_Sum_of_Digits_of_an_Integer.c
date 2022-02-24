#include<stdio.h>
int main()
{
    int n,a,b,c,sum=0,p=1;
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    while(c!=0)
    {
        b=c%10;
        p=p*b;
        c=c/10;
    }
    printf("%d",(p-sum));
    
}