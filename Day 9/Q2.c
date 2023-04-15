//Copy string without using strcpy()
#include <stdio.h>
int main() 
{
    char src[] = "Hello, world!";
    char dest[20];
    int i = 0;
    while(src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    return 0;
}
