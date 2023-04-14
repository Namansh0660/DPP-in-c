//Find odd or even number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter A number : ");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("%d is Odd",n);
    }
    else
    {
        printf("%d is Even",n);
    }
    return 0;
}
