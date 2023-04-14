//Program to take input of various data types(int,char,float,string)
#include <stdio.h>
#include <string.h>
int main() 
{
    int num;
    char letter;
    float decimal;
    char str[100];
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a character: ");
    scanf(" %c", &letter);  // add a space before %c to consume the newline character left in the input buffer
    printf("Enter a decimal: ");
    scanf("%f", &decimal);
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);  // %[^\n]s reads a string until a newline character is encountered
    printf("Interger : %d\nCharacter : %c\nDecimal : %0.2f\nString : %s\n", num, letter, decimal, str);
    return 0;
}
