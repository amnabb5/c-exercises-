#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int mirr(int num1){
int b;
b=0;
while (num1 !=0)
{
b=b*10+num1%10;
num1 = num1/10;

}
return b;
}




void IntFrac(double x, int *integerPart, double *fractionalPart) 
{
    *integerPart = (int)x;
    *fractionalPart = x - *integerPart;
}

void Fexpo(double fractionalPart, int *M, int *n) 
{
    *n = 0;

    while (fractionalPart < 1) 
    {
        fractionalPart = fractionalPart * 10;
        (*n)++;
    }
    *M = (int)fractionalPart;
}




int isMirror(int integerPart, int M) 
{
    return integerPart == mirr(M);
}

void DisplayMirrorElements(double T[], int N) 
{
    for (int i = 0; i <= N; i++) {
        double number = T[i];
        int integerPart;
        double fractionalPart;
        int M, n;
        
        IntFrac(number, &integerPart, &fractionalPart);

        Fexpo(fractionalPart, &M, &n);

        if (isMirror(integerPart, M)) {
            printf(" this number integer part is the mirror of his fractional part  %f\n", number);
        }
    }
}


int main(){
    //a)
    int num1;
printf(" enter your number for the mirror\n");

scanf("%d",&num1);

printf(" your mirror is %d" ,mirr(num1));



//2)
    double number ;
    printf(" enter your number for the intfrac \n");
    scanf("%lf" ,&number);
    int integerPart;
    double fractionalPart;

    IntFrac(number, &integerPart, &fractionalPart);
    printf("Number: %f\n", number);
    printf("Integer part: %d\n", integerPart);
    printf("Fractional part: %f\n", fractionalPart);



//3)


 printf(" enter your number for the fractionalpart \n");
    scanf("%lf" ,&fractionalPart);
    int M, n;
    Fexpo(fractionalPart, &M, &n);

    printf("Fractional part: %f\n", fractionalPart);
    
int N;
//enter N
do
{
    printf(" enter N your size of the array : \n");
    scanf("%d",&N);
} while (N>50 || N<1);


double T[N];


//fill the array
printf(" we will start fill the array \n");
for (size_t i = 0; i <= N; i++)
{
printf(" enter you number : \n");
   scanf("%lf",&T[i]);
  
}
   

    DisplayMirrorElements(T, N);


    
}