//Count Number of digits in an Interger
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter an Integer : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        c++;
    }
    printf("Number of Digits in an Integer is : %d",c);
    return 0;
}
