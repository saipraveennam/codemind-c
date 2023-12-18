#include<stdio.h>
int main()
{
    int n,i,sum=0,a,flag=0;
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
    a=sum/n;
    for(i=0;i<n;i++)
    {
    if(a==arr[i])
    {
        flag=1;
        break;
    }
    else
    {

        flag=0;
    }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}