//multiply two matrices
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Size : ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    printf("Enter elements of the first matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of the first matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Product of the two matrices:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ", (a[i][j]*b[i][j]));
        }
        printf("\n");
    }
    return 0;
}
