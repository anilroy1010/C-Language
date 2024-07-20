/*
About: This program  will reverse a string .
Author:Anil Roy. 
*/
#include<stdio.h>
#include<string.h>
#define SIZE 50

void  revString(char mySting[]){
    int length=strlen(mySting);
    int start=0;
    int end=length-1;
    char temp;
    while (start<end)
    {
        temp=mySting[start];
        mySting[start]=mySting[end];
        mySting[end]=temp;
        start++;
        end--;
    }

    printf("Reverse String: %s\n", mySting);
}
int main(){
    char str[SIZE];
    printf("Enter the string:\n");
    gets(str);  // not secure, use other input fun, like fgets
    revString(str);
    return 0;
}