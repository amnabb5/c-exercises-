#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX_SIZE 20


int SYM(int matrix[][MAX_SIZE], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                return 0;
            }
        }
    }
    return 1;
}
















 int main(void){










  int N;
    printf("Enter the order of the square matrix (N <= 20): ");
    scanf("%d", &N);
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (SYM(matrix, N)) 
    {
        printf("The matrix is symmetrical.\n");
        printf("Non-duplicate values and their positions:\n");
        for (int i = 0; i < N; i++) 
        {
            for (int j = i; j < N; j++) 
            {
                if (i != j && matrix[i][j] == matrix[j][i]) 
                {
                    printf("%d at (%d, %d) and (%d, %d)\n", matrix[i][j], i, j, j, i);
                }
            }
        }
    } else {
        printf("The matrix is not symmetrical.\n");
    }








 }