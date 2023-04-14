//Power of a Number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,result,p=2;
    printf("Enter a number : ");
    scanf("%d",&n);
    result=pow(n,p);
    printf("Power of %d is : %d",n,result);
    return 0;
}
