#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number: \n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:     
        printf("ONE\n");
        break;
    case 2:
        printf("TWO\n");
         break;
    case 3:    
        printf("THREE\n");
        break;
    case 4:
         printf("FOUR\n");
         break;
    case 5:
        printf("FIVE\n");
        break;
    case 6:
        printf("SIX\n");
    case 7:
         printf("SEVEN");
         break;
    case 8:
        printf("EIGHT");
        break;
    case 9:
        printf("NINE");
        break;
    case 0:
        printf("ZERO\n");
    default:
        printf(" Please, Enter Number from ZERO to NINE\n");
        break;
    }
    return 0;

}