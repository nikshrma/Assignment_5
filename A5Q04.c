//Linear search
#include<stdio.h>

int main(){
    //declaration
    int n, key , i;
   
    //key is the element we're searching for
    //input
    printf("Enter the size of the array\n");
    scanf("%d" , &n);
    // declaring array after we have array size is important as if we declare the array earlier
    // then we have to declare the size of the array as a constant or else we get a segmentation fault
    int arr[n];
   
    printf("Enter the elements of the array\n");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Enter the element we're searching for\n");
    scanf("%d" , &key);
    //traverse the array and check if the element is present
    for(i = 0 ; i < n ; i++){
        if(arr[i] == key){
            printf("Element found at position %d\n" , i+1);
            break;
        }
    }
    if(i==n){
        printf("Element not found\n");
    }
    return 0;
} 