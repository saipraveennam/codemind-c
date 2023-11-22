#include<stdio.h>
int main()
{
    int m,h,M;
    scanf("%d",&m);
    h=m/60;
    M=m%60;
    printf("%d Hour(s) %d Minute(s)",h,M);
}