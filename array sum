#include <stdio.h>

// Write your sumArray function here
int sumArray(int arr[],int size){
    int sum=0;
    for (int j=0;j<size;j++){
        sum += arr[j];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call the sumArray function and print the result
    int result;
    result = sumArray(arr,n);
    printf("Sum: %d\n",result);
    
    return 0;
}
