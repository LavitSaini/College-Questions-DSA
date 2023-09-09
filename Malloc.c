#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *ptr;
    printf("Enter Number of Elements You Wants to Allocate: ");
    scanf("%d", &n);
    
    ptr = (int* )malloc(n * sizeof(int));
    if(ptr == NULL){
        printf("Memeory is Not Allocated...");
    }
    else{
        for(int i=0; i<n; i++){
            printf("Enter Elements: ");
            scanf("%d", ptr + i);
        }

        for(int j=0; j<n; j++){
            printf("%d \t", *(ptr + j));
        }
    }

    free(ptr);
    return 0;
}