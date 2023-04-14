//Calculate the power of any number using recursion
#include <stdio.h>
int power(int n, int p) 
{
    if(p == 0) 
    {
        return 1;
    }
    else {
        return n * power(n, p - 1);
    }
}
int main() 
{
    int n, p, result;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    scanf("%d", &p);
    result = power(n, p);
    printf("%d^%d = %d\n", n, p, result);
    return 0;
}
