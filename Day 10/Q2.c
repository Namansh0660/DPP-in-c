//Accept and display a single employee details using structure
#include <stdio.h>
struct Employee 
{
    char name[50];
    int age;
    float salary;
};
int main() 
{
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("\nEmployee details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}
