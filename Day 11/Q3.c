//Display the lower triangle of a given matrix
#include <stdio.h>
int main() 
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    printf("Lower triangle of the matrix:\n");
    for(i=0; i<3; i++) 
    {
        for(j=0; j<=i; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
