#include<stdio.h>
int main()
{
    int n,i,lo;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
    
            lo=i;
    }
    printf("%d",lo);
}