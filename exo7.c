#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define MAX_BINARY_LENGTH 33 

void DecToBin(int num, char *binaryString) 
{
    int i = 0;
    if (num == 0) 
    {
        binaryString[i++] = '0';
        binaryString[i] = '\0';
        return;
    }
    while (num > 0) 
    {
        int remainder = num % 2;
        binaryString[i++] = (remainder == 0) ? '0' : '1';
        num /= 2;
    }
    int j;
    for (j = 0; j < i / 2; j++) 
    {
        char temp = binaryString[j];
        binaryString[j] = binaryString[i - j - 1];
        binaryString[i - j - 1] = temp;
    }
    binaryString[i] = '\0';



}


int BinToDec(char *binaryString) 
{
    int decimal = 0;
    int i = 0;
    while (binaryString[i] != '\0') 
    {
        decimal *= 2;
        decimal += binaryString[i] - '0'; 
        i++;
    }

    return decimal;
}

char XOR(char a, char b) 
{
    return (a == b) ? '0' : '1';
}


void BinToGray(char *binaryString, char *grayString) 
{
    int i;
    grayString[0] = binaryString[0];
    for (i = 1; binaryString[i] != '\0'; i++) 
    {
        grayString[i] = (binaryString[i] == binaryString[i - 1]) ? '0' : '1';
    }
    grayString[i] = '\0';
}
void GrayToBin(char *grayString, char *binaryString) 
{
    int i;
    binaryString[0] = grayString[0];
    for (i = 1; grayString[i] != '\0'; i++) 
    {
        binaryString[i] = (grayString[i] == binaryString[i - 1]) ? '0' : '1';
    }
    binaryString[i] = '\0';
}
int main(void){
    //1)
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    char binaryString[MAX_BINARY_LENGTH];
    DecToBin(num, binaryString);
    printf("Binary representation of %d is: %s\n", num, binaryString);


//2)
   
    printf("Enter a binary string: ");
    scanf("%s", binaryString);
    int decimal = BinToDec(binaryString);
    printf("Decimal equivalent: %d\n", decimal);


//3)
 char a, b;
    printf("Enter two binary characters (0 or 1): ");
    scanf(" %c %c", &a, &b);
    char result = XOR(a, b);
    printf("XOR between %c and %c is: %c\n", a, b, result);


//4)
   
    char grayString[33];   
    printf("Enter a binary string: ");
    scanf("%s", binaryString);
    BinToGray(binaryString, grayString);
    printf("Gray code equivalent: %s\n", grayString);



//5)
    
 
    printf("Enter a Gray code string: ");
    scanf("%s", grayString);
    GrayToBin(grayString, binaryString);
    printf("Binary code equivalent: %s\n", binaryString);
}