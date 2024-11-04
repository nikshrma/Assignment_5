//inserting an element
#include <stdio.h>

int main() {
    //declaration
    int arr[5] , n=4 , pos , val;
    //input
    printf("Enter 4 elements\n");
    for(int i=0 ; i<n ; i++) {
        scanf("%d" , &arr[i]);
    }
    //addition to be made
    printf("Enter the position and value to be inserted\n");
    scanf("%d%d" , &pos , &val);
    //shifting elements
    for(int i=3 ; i>=pos-1 ; i--) {
        arr[i+1] = arr[i];
    }   
    arr[pos-1] = val; 
    //output of new array
    printf("The array after insertion is\n");
    for(int i=0 ; i<=n ; i++) {
        printf("%d " , arr[i]);
    }
    return 0;
}
//a general solution can be made by first taking the size of the array and then taking the elements ,DIY