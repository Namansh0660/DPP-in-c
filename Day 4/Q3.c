//Check weather a number is prime or not
#include<stdio.h>
int main()
{
    int n,t=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not A Prime Number");
    }
    return 0;
}
