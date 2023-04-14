//Fibonacci sequence using recursion
#include<stdio.h>
int fibo(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{ 
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}
