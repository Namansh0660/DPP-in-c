//Read n characters in an array and display them in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Size : ");
    scanf("%d",&n);
    char ch[n];
    for(int i=0;i<n;i++)
    {
        scanf("\n%c",&ch[i]);
    }
    printf("In Reverse Order : ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
