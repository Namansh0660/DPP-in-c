//Full Pyramid of numbers
#include <stdio.h>
int main() 
{
    for (int i=1;i<=5;i++) 
    {
        for (int j=i;j<5;j++) 
        {
            printf("  ");
        }
        for (int j=i;j<i+i;j++) 
        {
            printf("%d ", j);
        }
        for (int k=i+i-2;k>=i;k--) 
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
