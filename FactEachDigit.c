/*
About: This program will get a number and display the factorial of each digit.
Author: Anil Roy.
*/
#include<stdio.h>
#include<stdlib.h>
int factDigit(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
       fact*=i;  
    }
    return fact;
}
int main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    while (num !=0)
    {
    int digit=num%10;  // get Ones digit
    num=num/10; // remove ones digit
    switch (digit)
    {
    case 1:
        printf("Factorial of %d: %d\n", digit, factDigit(digit));
        break;
    case 2:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 3:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 4:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 5:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 6:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 7:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 8:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    case 9:
         printf("Factorial of %d: %d\n", digit, factDigit(digit));
         break;
    default:
        break;
    }
  
  }
  return 0;
}