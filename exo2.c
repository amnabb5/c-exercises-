#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



void swap(char *a, char *b) {
    char c = *a;
    *a = *b;
    *b = c;
}
int main(void){
    //1)
    char a,b,c,d;
printf(" enter your 2 characters \n");
scanf("%c",&a);
scanf("%c",&b);
scanf("%c",&b);
swap(&a,&b);

 printf("After swapping: char1 = %c, char2 = %c\n", a, b);

//2)
char str[1000];
printf(" enter your string \n");



fgets(str, sizeof(str), stdin);
fgets(str, sizeof(str), stdin);


int length =strlen(str);
    
    int i, j;

    for (i = 0; i < (length/2); i++) {
        swap(&str[i], &str[(length-i-1)]);
    }

printf(" your reverse string : %s \n",str);








}