#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>




//****************************************************************************factorial*******************************************************
int fact(int num1 ){
    int result=num1;

if(num1== 1 || num1 ==  0 ){
result =1 ;   
}
else if( num1 < 0) {
    printf(" Negative number ''error'' \n");
return 0;
}else{
for (size_t i = 2; i < num1; i++)
{
    result = result*i;
    
}
}
return result;
}



















//******************************************************sum*********************************************************

int sum(int num1){
int result =0;
if(num1<=0){
    printf(" Negative number error");
    return 0;
}else{
for (size_t i = 1; i <=num1 ; i++)
{
   result = result + i;
}
}
return result;
}





















//**************************************************max**************************************************
int max(int num1 , int num2){
if(num1> num2){
    return num1;
}else if(num2>num1){
return num2;
}
else( printf ("the Two numbers are equal \n"));
}



// **************************************************power*******************************************************
double powe(double num1 , int num2){
    double result=1;
    int num3;
    num3 =num2;
    if( num2 < 0){
        num3 = num2*(-1);
    }
    if( num1 <0 ){
        printf("error n is Negative number ");
       return 0;
    }else if(num2 ==0){
return 1 ;
    }
    else{

for (size_t i = 0; i < num3; i++)
{
  result = num1*result;
}
    }

    if( num2 < 0){
        result = 1/result;
    }

    return result;
}






// **************************************************even digits*******************************************************
int even(int num1){
int result=0,dig;
dig=num1;
while (num1 != 0)
{
   if( dig % 2 == 0){
result++;
   }
dig = num1/10;
num1 = num1/10;
}
return result;
}



// **************************************************division*******************************************************


void divi(int num1 , int num2 , int* quo , int* rem){
*quo = num1/num2;
*rem = num1%num2;

}








//*******************************************main********************************************************
int main(void){

// EXO 1
    


//1)
    //  factorial
    int fact1, result;
printf("enter your number for the factorial \n");
scanf("%d",&fact1);
result = fact(fact1);
printf(" your result is : %d\n" , result);
// end of  factorial





//2)
    int sum1;
printf("enter your number for the sum \n");
scanf("%d",&sum1);
result=sum(sum1);
printf(" your result is : %d\n" , result);

//3)
int a,b ;
printf("enter your 2 numbers for the max\n");
scanf("%d",&a);
scanf("%d",&b);
result =max(a,b);
if( result == a ){
    printf(" the max is a : %d\n" ,a );
} else if( result == b ){
    printf(" the max is b : %d\n",b );
}



//4)
double n,result1 ;
printf("enter your 2 numbers for the power\n");
scanf("%lf",&n);
scanf("%d",&b);
result1 = pow(n,b);

printf(" your result is : %f  \n" , result1);


//5)

printf("enter your number for the calculation of the number of even digits \n");
scanf("%d",&b);
result=even(b);

printf(" your result is : %d\n" , result);




//6)
int que,rem;
printf("enter your 2 numbers for division \n");
scanf("%d",&a);
scanf("%d",&b);
divi(a,b,&que,&rem);
printf(" your remainder is %d \n" ,rem);
printf(" your quotient is %d \n" ,que);





}