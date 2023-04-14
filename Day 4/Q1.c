//Generate multiplication table for any given single digit number
#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
    return 0;
}
