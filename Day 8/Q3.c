//Find min and max element of an array 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
    printf("Minimun Value is : %d\nMaxiumum Values if : %d",min,max);
    return 0;
}
