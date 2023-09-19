#include<stdio.h>
#define n 100

char str[n];

int main(){

    // Pointer to String Concept...
    printf("Enter a String: ");
    gets(str);

    // Initialize a Pointer and Assigns String index[0] Address to it...
    char *ptr = str;
    
    //Display String Using Pointer...
    while(*ptr != '\0'){
        printf("%c", *(ptr));
        ptr = ptr + 1;
    }
    return 0;
}