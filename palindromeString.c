/*
About: This program will check whether a given string is palindrome or not.
Author: Anil Roy
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int ispalindrome(char str[]){
int l=0;
int h=strlen(str)-1;
while(h>l){
    if (tolower(str[l]) !=tolower(str[h]))
    {
        return 0;
    }
    l++;
    h--;
    
}
return 1;
}
int main(){

    char str[100];
    printf("Enter the string: \n");
    gets(str);
    if (ispalindrome(str))
    {
        printf("Palindrome.");

    }
    else{
        printf("Not Palindrome.");
    }
    
    return 0;
}
