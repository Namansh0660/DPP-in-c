//Create a structure with two fields as subject and marks. Receive 'n' number of records from the user. Then calculate the total marks of each subject store it in the resultant structure and display it. (subjects is maths and english)
#include <stdio.h>
struct Marks 
{
    int maths;
    int english;
};
int main() 
{
    int n, i;
    struct Marks m = {0, 0};
    printf("Enter the number of records : ");
    scanf("%d", &n);
    for(i=0; i<n; i++) 
    {
        struct Marks temp;
        printf("\nEnter marks of record %d:\n", i+1);
        printf("Enter maths marks : ");
        scanf("%d", &temp.maths);
        printf("Enter english marks : ");
        scanf("%d", &temp.english);
        m.maths += temp.maths;
        m.english += temp.english;
    }
    printf("\nTotal marks:\n");
    printf("Maths: %d\n", m.maths);
    printf("English: %d\n", m.english);
    return 0;
}
