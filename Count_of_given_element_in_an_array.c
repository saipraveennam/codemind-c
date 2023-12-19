#include<stdio.h>
int main()
{
    int n,i,N,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        if(arr[i]==N)
        {
            c=c+1;;
        }
    }
    printf("%d",c);
}