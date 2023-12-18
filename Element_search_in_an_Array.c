#include<stdio.h>
int main()
{
    int n,N,i,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
     if(N==arr[i])
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