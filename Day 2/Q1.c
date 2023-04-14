//Compute quotient and reminder of the given number
#include <stdio.h>
int main() 
{
    int num, divisor, quotient, remainder;
    printf("Enter the dividend : ");
    scanf("%d", &num);
    printf("Enter the divisor : ");
    scanf("%d", &divisor);
    quotient = num / divisor;
    remainder = num % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}
