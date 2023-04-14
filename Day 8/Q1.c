//Find the average of n numbers using arrays
#include<stdio.h>
int main()
{
    int n,sum=0,avg;
    printf("Enter Number : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d : ",(i+1));
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        avg=sum/n;
    }
    printf("Average of %d numbers is : %d",n,avg);
    return 0;
}
