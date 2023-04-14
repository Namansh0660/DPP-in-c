//Calculate the sum of natural numbers
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter Value of N : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of Natural Numbers till %d is : %d",n,sum);
    return 0;
}
