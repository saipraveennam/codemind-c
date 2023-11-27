#include<stdio.h>
int main()
{
    float gs,bs,hra,da,pf;
    scanf("%f",&bs);
    scanf("%f",&hra);
    scanf("%f",&da);
    pf=bs*12/100;
    printf("%.2f
",pf);
    gs=bs+hra+da+pf;
    printf("%.2f",gs);
}