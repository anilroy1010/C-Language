/*
About: This program will help to find the avarage of a Array
Author: Anil 
*/
#include<stdio.h>
float arrayMean(int num[], int size){
      int sum=0;
      for( int i = 0; i < size; i++)
      {
      sum+=num[i];
      }
  return (float)sum/size; //type casting
  }
int main(){

    int myArray[5];
    int i; 
    float x;
    printf("Enter the Array Elments:\n");
    for ( i = 0; i < 5; i++)
    {
      scanf("%d", &myArray[i]);
    }
    x=arrayMean(myArray, 5);
    printf("The Avarage is: %.2f",x);
    
    return 0;
}