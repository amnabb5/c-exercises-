#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <stdbool.h>


bool Prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void displayPrime(int arr[], int size) {
    printf("Prime pairs in the array:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (Prime(arr[i]) && Prime(arr[j])) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}




















int pgcd(int a, int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}


int ppcm( int a, int b ){
int ppc;
ppc = (a * b)/pgcd(a,b);

return ppc;
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}


int main(){
 int num1, num2,pgc;

    printf("Enter the first number for the pgcd :");
    scanf("%d", &num1);

    printf("Enter the second number for the pgcd : ");
    scanf("%d", &num2);

if( num1< num2){
swap(&num1 ,&num2);
}
    printf("You entered: %d and %d\n", num1, num2);


pgc = pgcd(num1,num2);
printf(" your pgcd is : %d \n",pgc);

printf(" your lcm is %d \n",ppcm(num1,num2));


//2)
int N,pgc1;
//enter N
do
{
    printf(" enter N your size of the array : \n");
    scanf("%d",&N);
} while (N>50 || N<2);













// make the array
int T[N];


//fill the array
printf(" we will start fill the array \n");
for (size_t i = 0; i <= N; i++)
{
printf(" enter you number : \n");
   scanf("%d",&T[i]);
  
}



int result = T[0];
    for (int i = 1; i <= N; i++) {
        result = pgcd(result, T[i]);
    }
printf(" your array GCD is : %d \n",result);

//ppcm

  result = T[0];
    for (int i = 1; i <= N; i++) {
        result = ppcm(result, T[i]);
    }

printf(" your array LCM is : %d \n" ,result);




  displayPrime(T, N);
}