//Reverse a Number
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Original Number is : %d",n);
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("\nReversed Number is : %d",rev);
    return 0;
}
