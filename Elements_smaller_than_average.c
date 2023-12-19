#include<stdio.h>
int main()
{
    int n,i,c=0,sum=0;
    float a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    a=float(sum/n);
    for(i=0;i<n;i++)
    {
    if(arr[i]<=a)
    {
     c=c+1;  
    }
    }
    printf("%d",c);
}