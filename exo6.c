#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
 #include <ctype.h> 

 void low(char *str)
{
    for (int i =0; str[i] != '\0' ; i++ )
    {
        str[i] = tolower(str[i]);
    }
}
void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void sort(char *str) 
{
    int n = 0;
    while (str[n] != '\0') 
    {
        n++;
    }
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (str[j] > str[j + 1]) 
            {
                swap(&str[j], &str[j + 1]);
            }
        }
    }
}


 int main(){

    char word1[100];
    char word2[100];
    printf("Enter a word number 1: ");
    scanf("%s", word1);
    printf("Enter a word number 2: ");
    scanf("%s", word2);
    low(word1);
    sort(word1);
    low(word2);
    sort(word2);

    if (strcmp(word1, word2) == 0) 
    {
        printf("The words are anagrams.\n");
    } else 
    {
        printf("The words are not anagrams.\n");
    }



 }