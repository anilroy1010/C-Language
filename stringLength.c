#include<stdio.h>
#include<string.h>

int main(){
    char mystr[100];
    printf("Enter a string : ");

    fgets(mystr, sizeof(mystr), stdin);

    // Remove the newline that fgets capture
    mystr[strcspn(mystr, "\n")]= '\0';
    
    //Calculate the length of the string
    int lenght=strlen(mystr);

    printf("the Lenght of the string : %d\n", lenght);
    
    return 0;
}