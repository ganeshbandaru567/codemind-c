#include<stdio.h>
int main()
{
    int l,b,c,w,nl,nb,area,tarea,parea,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=l*b;
    nl=l+(w+w);
    nb=b+(w+w);
    parea=nl*nb;
    tarea=parea-area;
    cost=c*tarea;
    printf("%d",cost);
    
}