/*
Auhtor: This program will calculate the function of a number.
Auhtor: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
int powFun(int val){

    int power;
    power=val*val;
    return power;
    
}
int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    printf("The power of the number is : %d" , powFun(num) );
    return 0;

}