#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf(" %d ",&arr[i][j]);
        }
    
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}