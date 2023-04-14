//Display Characters from A to Z using loop
#include<stdio.h>
int main()
{
    for(int i=65;i<=90;i++)  //for A to Z
    {
        printf("%c",(char)i);
    }
    printf("\n");
    for(int i=97;i<=122;i++)  //for a to b
    {
        printf("%c",(char)i);
    }
    return 0;
}
