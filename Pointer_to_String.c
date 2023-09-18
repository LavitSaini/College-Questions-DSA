#include<stdio.h>
#define n 100

int main(){

    // Pointer to String Concept...
    char str[n];
    printf("Enter a String: ");
    gets(str);

    // Initialize a Pointer and Assigns String index[0] Address to it...
    char *ptr = str;
    
    //Display String Using Pointer...
    for(int i=0; *(str + i) != '\0'; i++){
        printf("%c", *(str + i));
    }
    return 0;
}