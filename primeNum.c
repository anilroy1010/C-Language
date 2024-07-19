/*
About : This program is for prime number checking
Author: Anil Roy
*/
#include<stdio.h>
int  prime(int val){
     if (val==1)
     {
        printf("Not Prime or Even.");
     }
     else if(val==2){
     printf("Prime Number.");
     }
     else if(val%2==1){
        printf("Prime number.");

     }
     else
     printf("Even Number.");
    
     

}
int main(){
    int  num;
    printf(" Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}