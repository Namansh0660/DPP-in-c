//Function that returns addititon of two interger
#include<stdio.h>
int add(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int n1,n2;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("Sum of two Digits are : %d",add(n1,n2));
    return 0;
}
