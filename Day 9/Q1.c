//find the length of the string without using strlen()
#include <stdio.h>
int main() 
{
    char str[] = "Hello, world!";
    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    printf("Length of the string: %d", len);
    return 0;
}
