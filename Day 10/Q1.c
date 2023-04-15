//display size of the structure
#include<stdio.h>
struct Person {
  char name[50];
  int age;
  char address[100];
};
int main()
{
    printf("Size of Person structure: %d bytes\n", sizeof(struct Person));
    return 0;
}
