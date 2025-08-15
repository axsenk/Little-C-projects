#include <stdio.h>

// Write your modifyArray function here
void modifyArray(int arr[],int size,int value){
    for (int j =0;j<size;j++){
        arr[j] = arr[j] + value ;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    // Call the modifyArray function and print the result
    modifyArray(arr,n,k);
    for (int a =0;a<n;a++){
      printf("%d ",arr[a]);
    }
   
    
    return 0;
}
