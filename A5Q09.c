#include<stdio.h>
int main(){
    //declaration
    int mat1[3][3] , mat2[3][3] , mat3[3][3] , mat4[3][3];
    printf("Enter the elements of the first matrix : \n");
    for (int i = 0 ; i <= 2 ; i++ ){
    for (int j = 0 ; j <= 2 ; j++){
    scanf ( "%d", &mat1[ i ][ j ] ) ;
    }
}
    printf("Enter the elements of the second matrix : \n");
    for (int i = 0 ; i <= 2 ; i++ ){
    for (int j = 0 ; j <= 2 ; j++){
    scanf ( "%d", &mat2[ i ][ j ] ) ;
    }
}
//addition
for(int i = 0 ; i <= 2 ; i++){
    for(int j = 0 ; j <= 2 ; j++){
        mat3[i][j] = mat1[i][j] + mat2[i][j];
    }  
}
printf("Addition of mat1 and mat2 : \n");
    for (int i = 0 ; i <= 2 ; i++ ){
    for (int j = 0 ; j <= 2 ; j++){
    printf ( "%d ", mat3[ i ][ j ] ) ;
    }
    printf("\n");
}
//transpose
printf("Transpose of mat3 : \n");
for(int i = 0 ; i <= 2 ; i++){
    for(int j = 0 ; j <= 2 ; j++){
        mat4[i][j] = mat3[j][i];
    }
}
for (int i = 0 ; i <= 2 ; i++ ){
    for (int j = 0 ; j <= 2 ; j++){
    printf ( "%d ", mat4[ i ][ j ] ) ;
    }
    printf("\n");
}
//multiplication
//correlate this to how you would mutliply 2 matrices on paper
for(int i = 0 ; i <= 2 ; i++){
    for(int j = 0 ; j <=2 ; j++){
        int sum = 0;
        for(int k = 0 ; k <= 2 ; k++){
        sum = sum + mat1[i][k] * mat2[k][i];
      }
      mat3[i][j] = sum;
    }
}
printf("Multiplication of mat1 and mat2 : \n");
for (int i = 0 ; i <= 2 ; i++ ){
    for (int j = 0 ; j <= 2 ; j++){
    printf ( "%d ", mat3[ i ][ j ] ) ;
    }
    printf("\n");
}

    return 0;
}