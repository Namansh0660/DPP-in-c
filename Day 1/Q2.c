//Swapping two numbers using third variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Value of A : %d\nValue of B : %d",a,b);
    return 0;
}
