#include<stdio.h>
int main()
{
    int n,a,m,sum=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    if(m%sum==0)
    printf("True");
    else
    printf("False");
}