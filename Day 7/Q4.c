//Count the digits of a given number using recursion
#include<stdio.h>
int dig(int n)
{
    if(n == 0) {
        return 0;
    }
    else {
        return 1 + dig(n / 10);
    }
}
int main()
{ 
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("No of Digits in %d is : %d",n,dig(n));
    return 0;
}
