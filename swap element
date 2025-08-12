#include <stdio.h>

void swapElements(int arr[], int size, int index1, int index2) {
    // Write your code here
    int dif = arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=dif;
    for (int i=0;i<size;i++){
     printf("%d ",arr[i]);
    }
    
    
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index1, index2;
    scanf("%d %d", &index1, &index2);
    
    swapElements(arr, size, index1, index2);
    
    return 0;
}
