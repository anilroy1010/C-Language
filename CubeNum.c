/*
About: This program will get number grom user and print the cube of that number.
Author: Anil Roy
*/
#include<stdio.h>

int fun(int val1){
    int cube;
    cube=val1*val1*val1;
    return cube;
}
int main(){
    int num, myCube;
    printf("Enter a number: \n");
    scanf("%d", &num);
    myCube=fun(num);

    printf("The Cube of the number is :%d", myCube);
    return 0;
    
    }