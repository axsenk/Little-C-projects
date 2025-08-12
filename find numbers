#include <stdio.h>

// Write your findSecondLargest function here
int findSecondLargest(int numbers[],int size){
    int first = numbers[0];
    int second = numbers[0];

    for (int a=0;a<size;a++){

        if (first <= numbers[a] && second<=first){
            second = first;
             first = numbers[a];
        }
        else if (numbers[a]<=first && second<=numbers[a]){
            second = numbers[a];
        }
    }
    return second;

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
    int secondLargest = findSecondLargest(numbers, size);
    printf("%d", secondLargest);
    
    return 0;
}
