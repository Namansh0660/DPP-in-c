//Check weather a number is Armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int n, t, r, result = 0, d = 0;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    t = n;
    while (t != 0) 
    {
        t /= 10;
        ++d;
    }
    t = n;
    while (t != 0) 
    {
        r = t % 10;
        result += pow(r, d);
        t /= 10;
    }
    if (result == n) 
    {
        printf("%d is an Armstrong number.", n);
    }
    else 
    {
        printf("%d is not an Armstrong number", n);
    }
    return 0;
}
