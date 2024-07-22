/*
About : This program will get a year and check whether it is a yeap year or normal year.
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
void leapYear(int val){
    if ((val%4==0 && val%100 !=0) || (val%400==0))
    {
        printf("%d is a Leap Year.", val);
    }
    else{
        printf("%d is not a Leap Year.", val);
    }
    
    return ;
}
int main(){
    int year;
    printf("Enter The Year : \n");
    scanf("%d", &year);
    leapYear(year);
    return 0;
}