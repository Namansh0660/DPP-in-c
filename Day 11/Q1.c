//Find the sum of all elements in an array
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter Size of the array : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("Sum of all Elements in array is : %d",sum);
    return 0;
}
