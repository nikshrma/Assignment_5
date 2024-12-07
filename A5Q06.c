//sum and avg of array elements
#include <stdio.h>

int main() {
    //declaration
    int n, i;
    float sum = 0.0, average; // sum initialised to 0 to avoid garbage value

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
//here .2f is used to print the float value upto 2 decimal places
    return 0;
}