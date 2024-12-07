#include<stdio.h>
int main(){
    //declaration
    int n , m;
    printf("Enter the number you wish to convert : ");
    scanf("%d", &n);
    int binary = 0, place = 1;
    //special case where n = 0
    if(n == 0){
        printf("The binary equivalent is : 0\n");
        return 0;
    }
    while (n > 0) {
        m = n % 2;
        binary = binary + (m * place);//reverses the binary number
        place *= 10;
        n /= 2;
    }
    printf("The binary equivalent is : %d\n", binary);
    return 0;
}
//to convert to hexadecimal or octal, change 2 to 16 or 8 respectively