#include<stdio.h>
#include<stdlib.h>

int main(){
    float n;
    float *ptr;
    printf("Enter Number of Elements You Wants to Allocate: ");
    scanf("%f", &n);
    
    ptr = (float* )calloc(n, sizeof(float));
    if(ptr == NULL){
        printf("Memeory is Not Allocated...");
    }
    else{
        for(int i=0; i<n; i++){
            printf("Enter Elements: ");
            scanf("%f", ptr + i);
        }

        for(int j=0; j<n; j++){
            printf("%f \t", *(ptr + j));
        }
    }

    free(ptr);
    return 0;
}