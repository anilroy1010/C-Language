/*
About: This program will print the area of circle.
Author: Anil Roy 
*/
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159     // value of Pi 3.14159
float circleArea( int val){
    return PI*val*val;
}
int main(){
    float radius;
    printf("Enter the radius of a circle: \n");
    scanf("%f", &radius);
    printf("The area of the circle is: %.2f", circleArea(radius));
     return 0;
}