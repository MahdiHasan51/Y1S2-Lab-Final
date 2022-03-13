// Write a C program to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    printf("Enter string1: ");
    gets(str1);

    printf("Enter String2: ");
    gets(str2);

    strcpy(str2, str1);
    printf("This is from String 2: %s", str2);
    return 0;
}