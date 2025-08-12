#include <stdio.h>

// Function to print the diagonal elements of a square matrix
void printDiagonal(int matrix[][100], int size) {
    // Write your code here
    for (int a=0; a<size;a++){
        if (a<=size-1){
            printf("%d ",matrix[a][a]);
        }
    }
    
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
    
    printDiagonal(matrix, size);
    
    return 0;
}
