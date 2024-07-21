/*
About : This program will calculate the sum of a given digits.
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
int SumDigit( int val){
    int sum=0;
    while (val>0)
    {
        sum+= val%10;   // Add the last digit of n to total_sum
        val=val/10; // Remove the last digit from n
    }
    return sum;
    
}
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The sum of the digits is: %d", SumDigit(num) );
    return 0;
}