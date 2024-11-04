// deletion of an element
#include<stdio.h>

int main(){
    //declaration
    int arr[5] , n=4 , pos;
    //input
    printf("Enter 5 elements\n");
    for(int i =  0 ; i < 5 ; i++) {
        scanf("%d" , &arr[i]);
    }
    printf("Enter the position to be deleted\n");
    scanf("%d" , &pos);
    //shifting elements to the left
    for(int i = pos-1 ; i < n ; i++) {
        arr[i] = arr[i+1];
    }
    //output
    printf("The array after deletion is\n");

    for(int i = 0 ; i < n ; i++) {
        printf("%d " , arr[i]);
    }

    return 0;
}
//a generalised solution can be made by first taking the size of the array and then taking the elements ,DIY    