#include <stdio.h>

// Function to calculate the sum of boundary elements
int sumBoundary(int matrix[][100], int size) {
    // Write your code here
    if (size==1){
        return matrix[0][0];
    }
    int sum =0;
    for (int a=0;a<=size-1;a++){
        sum += matrix[0][a];
        sum += matrix[size-1][a];}
        for (int b=1;b<=size-2;b++){
            sum += matrix[b][0];
            sum += matrix[b][size-1];
        }
    
    return sum;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int matrix[100][100];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int result = sumBoundary(matrix, size);
    printf("%d\n", result);
    
    return 0;
}
