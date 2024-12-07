// find largest and smallest element in array
#include<stdio.h>
int main(){
    int n , a = 1 , lar , sm ;
    printf("Enter the number of elements in the array : ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i] );
        if(a){
            lar = arr[i];
            sm = arr[i];
            a = 0;
        }
        if(arr[i] > lar){
            lar = arr[i];
        }
        if(arr[i] < sm){
            sm = arr[i];
        }
    }
    printf("The largest element in the array is : %d\n" , lar);
    printf("The smallest element in the array is : %d\n" , sm);

    return 0 ;
}