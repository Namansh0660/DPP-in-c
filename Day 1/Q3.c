//Swapping two numbers without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Value of A : %d\nValue of B : %d",a,b);
    return 0;
}
