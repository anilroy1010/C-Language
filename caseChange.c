#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter a character you want to Change CASE:\n");
    ch=getchar();
    if (ch>=65)
    {
        if (ch<=90)
        {
            printf("UPPER CASE LETTERS");
        }
        else{
            printf("LOWER CASE LETTERS");
        }
    }
    return 0;
    
}