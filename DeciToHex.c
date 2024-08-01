/*
About: This program will print Decimal number to Hexadecimal number
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
int deciToHex(int deciNum){
    //Array to store hexadecimal number
    char hex[100];
    int i = 0;
    // loop until the decimal number is reduced to 0
    while (deciNum!=0)
    {
        int temp =0;
        temp=deciNum % 16;  // get the reminder when the number is divided by 16

        // convert the remainder to the corresponding  hexadecimal digits
        if (temp<10)
        {
            hex[i]=temp+48;  // ASCII value of 0 is 48
        }
        else{
            hex[i]=temp+55; // ASCII value of A is 65;
        }
        i ++;
        deciNum=deciNum/16;
        
    }
    // Print the hexadecimal number in reverse order 
    printf("Hexadecimal : ");
    for (  int j = i-1; j>=0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
    
    
}
int main(){
    int decimaNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimaNumber);
    deciToHex(decimaNumber);
    return 0;
}