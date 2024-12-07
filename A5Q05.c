//binary search
#include<stdio.h>

int main(){
    int n , key;
    printf("Enter the number of elements in the array.\n");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements of the array in ascending order.\n");
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d" , &arr[i]);
    }
    
    printf("Enter the element to be searched.\n");
    scanf("%d" , &key);
    int  low = 0 , high = n-1 , mid;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            printf("Element found at position %d.\n" , mid+1);
            return 0;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }  
    }

    
        printf("Element not found.\n");
    
   
    return 0;
}