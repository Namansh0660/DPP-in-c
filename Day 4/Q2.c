//Check weather a number is palindrome or not
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int t=n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    return 0;
}
