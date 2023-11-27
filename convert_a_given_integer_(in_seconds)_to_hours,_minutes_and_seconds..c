#include<stdio.h>
int main()
{
    int s,H,M,S;
    scanf("%d",&s);
    H=s/3600;
    M=(s-(H*3600))/60;
    S=(s-((H*3600)+(M*60)));
    printf("H:M:S-%d:%d:%d",H,M,S);
}