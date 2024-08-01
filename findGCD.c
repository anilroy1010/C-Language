#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y){
    while (y !=0)
    {
       int temp=y;
       y= x % y;
       x=temp;
    }
    return x;
}
int main(){
    int num1, num2;
    printf("Enter the two integer: ");
    scanf("%d %d", &num1, &num2);
    printf(" GCD of %d and %d is: %d", num1, num2, gcd(num1, num2));
    return 0;
}