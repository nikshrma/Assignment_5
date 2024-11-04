//reversing an array
#include<stdio.h>

int main(){
    //declaration
    int n[5];
    
    //input
    printf("Enter 5 numbers.\n");
    for(int i = 0 ; i < 5 ; i++ ){
        scanf("%d" , &n[i]);
    }
    //output
    printf("The numbers in reverse order are:\n");
    for(int i = 4 ; i >= 0 ; i-- ){
        printf("%d\n" , n[i]);
    }
    return 0;
}