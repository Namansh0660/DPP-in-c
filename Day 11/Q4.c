//find the sum of the left diagonals of a matrix
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter Size : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter Values in Matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("Matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of left Diagonal is : %d",sum);
    return 0;
}
