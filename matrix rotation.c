#include <stdio.h>

void initializeMatrix(int matrix[][10], int size);
void rotateMatrix(int original[][10], int rotated[][10], int size);
int findElement(int matrix[][10], int size, int target);

int main() {
    int n;
    scanf("%d", &n);
    int matrix[10][10];
    int rotated[10][10];
    
    // Initialize the matrix
    printf("Original Matrix:\n");
    initializeMatrix(matrix,n);
    
    // Print original matrix
    for (int g=0;g<n;g++){
        for (int h =0;h<n;h++){
            printf("%d ",matrix[g][h]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Rotated Matrix:\n");
    
    // Rotate the matrix
    rotateMatrix(matrix,rotated,n);
    
    // Print rotated matrix
    for (int i=0;i<n;i++){
        for (int j =0;j<n;j++){
            printf("%d ",rotated[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    // Find element 10
    
    int result = findElement(matrix,n,10);
    if (result==1){
        printf("Found");
    }
    else {
        printf("Not found");
    }
    
    return 0;
}

void initializeMatrix(int matrix[][10], int size) {
    // Your code here
    int value =1;
    for (int a=0;a<size;a++){
      for (int b=0;b<size;b++){
        matrix[a][b]=value++;
        
      }  
      
    }
}

void rotateMatrix(int original[][10], int rotated[][10], int size) {
    // Your code here
    for (int a=0;a<size;a++){
        for (int b=0;b<size;b++){
            rotated[b][size-1-a]=original[a][b];
           
        }
       
    }
}

int findElement(int matrix[][10], int size, int target) {
    // Your code here
    for (int a=0;a<size;a++){
        for(int b=0;b<size;b++){
            if (matrix[a][b]==target){
                return 1;
            }
           
        }
    }
}
