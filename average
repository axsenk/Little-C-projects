#include <stdio.h>

// Write your findAverage function here
float findAverage(int numbers[],int size){
    float sum = 0;
    for (int j =0;j<size;j++){
        sum += numbers[j];
    }
    return sum/size;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int numbers[size];
    
    // Read array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Call your function and print the result
    float average = findAverage(numbers, size);
    printf("Average: %.2f\n", average);
    
    return 0;
}
