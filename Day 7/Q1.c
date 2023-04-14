//Sum of Natural Numbers Using Recursion
#include<stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}
int main()
{ 
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum(n));
    return 0;
}
