//Accept and display a n number of employee details using structure pointers
#include <stdio.h>
#include <stdlib.h>
struct Employee 
{
    char name[50];
    int age;
    float salary;
};
int main() 
{
    int n, i;
    struct Employee *emp;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    emp = (struct Employee*) malloc(n * sizeof(struct Employee));
    for(i=0; i<n; i++) 
    {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Enter employee name: ");
        scanf("%s", (emp+i)->name);
        printf("Enter employee age: ");
        scanf("%d", &(emp+i)->age);
        printf("Enter employee salary: ");
        scanf("%f", &(emp+i)->salary);
    }
    printf("\nEmployee details:\n");
    for(i=0; i<n; i++) 
    {
        printf("\nDetails of employee %d:\n", i+1);
        printf("Name: %s\n", (emp+i)->name);
        printf("Age: %d\n", (emp+i)->age);
        printf("Salary: %.2f\n", (emp+i)->salary);
    }
    free(emp);
    return 0;
}
