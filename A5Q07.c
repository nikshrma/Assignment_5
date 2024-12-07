#include<stdio.h>
int main(){
    //declaration
    int a , b , c;
    printf("Enter the size of first 2 arrays : ");
    scanf("%d %d" , &a , &b);
    int arr1[a] , arr2[b];
    c=a+b;
    int arr3[c];
    printf("Enter the elements of the first array : ");
    for(int i = 0 ; i < a ; i++){
        scanf("%d" , &arr1[i]);
    }
    printf("Enter the elements of the second array : ");
    for(int i = 0 ; i < b ; i++){
        scanf("%d" , &arr2[i]);
    }
    //merging the arrays
    for(int i = 0 ; i < a ; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0 ; i < b ; i++){
        arr3[a+i] = arr2[i];
    }
    printf("The merged array is : \n");
    for(int i = 0 ; i < c ; i++){
        printf("%d " , arr3[i]);
    }
    return 0;
}