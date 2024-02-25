#include<stdio.h>
int main()
{
    int i,j,r,c,n;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(arr[i][j]==n)
            {
            printf("1");
            return 1;
            }
        }
    }
    printf("0");
    return 0;
    
}