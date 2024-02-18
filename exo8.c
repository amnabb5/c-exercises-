#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX_SIZE 50


int productOfNonZeroDigits(int num) 
{
    int product = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit != 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

int isProdigious(int num) 
{
    int product = productOfNonZeroDigits(num);
    if (product != 0 && num % product == 0) 
    {
        return 1;
    } else {
        return 0; 
    }
}




int main(){

//1)

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isProdigious(num)) 
    {
        printf("%d is prodigious.\n", num);
    } else 
    {
        printf("%d is not prodigious.\n", num);
    }





    //2)


  int N;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &N);
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < N; i++) 
    {
        if (isProdigious(matrix[i][i])) 
        {
            int sum = 0;
            for (int j = 0; j < N; j++) 
            {
                sum += matrix[i][j];
            }
            matrix[i][i] = sum;
        }
    }
    printf("Modified matrix:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}