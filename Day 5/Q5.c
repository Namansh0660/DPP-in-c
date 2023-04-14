//Addition of two numbers using call by reference 
#include <stdio.h>
void add(int *x, int *y);
int main() 
{
    int a, b;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);
    add(&a, &b);
    printf("Sum of two number is  : %d\n", a);
    return 0;
}
void add(int *x, int *y) 
{
    *x=*x+*y;
}
