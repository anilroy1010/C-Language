/*
About: This program will print the min and max array element.
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void MinMaxElement(int val[]){
    int i;
    int min, max;
    min=max=val[0];
    for ( i = 0; i < SIZE; i++)
    {
        if (val[i]>max)
        {
            max=val[i];
        }
        if (val[i]<min)
        {
           min=val[i];
        }
        
    }
    printf("Min: %d\n", min);
    printf("Max: %d", max);
    
}
int main(){

    int myArray[SIZE];
    printf("Enter the array: \n");
    for (  int i = 0; i < SIZE; i++)
    {
        scanf("%d\n", &myArray[i]);
    }
    MinMaxElement(myArray);
     return 0;

}