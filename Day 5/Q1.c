//Sum of digits using function
#include<stdio.h>
int sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Sum of Digits is : %d",sum(n));
    return 0;
}
