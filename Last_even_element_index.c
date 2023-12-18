#include<stdio.h>
int main()
{
    int n,i,le;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
    
            le=i;
    }
    printf("%d",le);
}