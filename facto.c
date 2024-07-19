/*
About: This program will print the factorial of a number.
Author:Anil Roy 
*/
#include<stdio.h>
int myfact(int val){
    if(val==0){
        return 1;
    }
    else{
        return val*myfact(val-1);
    }
    
}
int main(){
    int  num, facto;
    printf("Enter a number: ");
    scanf("%d", &num);
    facto=myfact(num);
    printf("The Factorial of the number is : %d",facto);
    return 0;
}