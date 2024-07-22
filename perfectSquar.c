/*
About: This program will check the perfect square of a number.
Author: Anil Roy
*/
#include<stdio.h>
#include<math.h>
int isPerfectSquare(int val){
    int psquare;
    if (val<0)
    {
        return 0;
    }
    else{
        psquare=(int)sqrt(val);
        if (psquare*psquare==val)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
}

    int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (isPerfectSquare(num))
    {
        printf("Perfect Square.");
    }
    else{
        printf("Not Perfect.");
    }
    
  return 0;
}