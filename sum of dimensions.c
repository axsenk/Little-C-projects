#include <stdio.h>

void processMatrix(int matrix[][3], int size,int* sum_of_all,int* sum_of_mdiagonal,int* sum_of_andiagonal) {
    // Write your code here
    
    for(int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            *sum_of_all += matrix[i][j];
        }
       
    }
    
    for(int k = 0;k<size;k++){
        if (k<=size-1){
    *sum_of_mdiagonal += matrix[k][k];
    }
    }
    
    for(int l = 0;l<size;l++){
        if(l<=size-1){
    *sum_of_andiagonal += matrix[l][(size-1)-l];
    }
    }   
}

int main() {
    // Write your code here
    int sum_of_all =0;
    int sum_of_mdiagonal =0;
    int sum_of_andiagonal=0;
    int size=3;

    int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    processMatrix(matrix,size,&sum_of_all,&sum_of_mdiagonal,&sum_of_andiagonal);
    printf("Sum of all elements: %d\n",sum_of_all);
    printf("Sum of main diagonal: %d\n",sum_of_mdiagonal);
    printf("Sum of anti-diagonal: %d\n",sum_of_andiagonal);
    
    return 0;
}
