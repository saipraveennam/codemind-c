#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        int sum=0;
        for(i=0;i<r;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
    
}