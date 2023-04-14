//Largest Among three Numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d" ,&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater : %d",a);
        }
        else 
        {
            printf("c is greater : %d",c);
        }
    }
    else if(b>c)
    {
        printf("b is greater : %d" ,b);
    }
    else
    {
        printf("c is greater : %d" ,c);
    }
    return 0;
}
