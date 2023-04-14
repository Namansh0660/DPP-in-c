//Find the second max element in an array
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int smax = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) 
        {
            smax = arr[i];
        }
    }
    printf("The second max element is: %d", smax);
    return 0;
}
