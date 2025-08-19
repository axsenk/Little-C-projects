#include <stdio.h>

int main() {
    // TODO: Write your code here
    // Declare and initialize the array 'data' with values {12, 24, 36, 48, 60}
    int data[5]={12,24,36,48,60};
    // Declare pointer 'ptr' and initialize it to point to the first element
    int *ptr=data;
    // Use a for loop with pointer arithmetic to traverse the array
    for (ptr=data;ptr<data+5;ptr++){
        printf("Value: %d, Address: %p\n",*ptr);
    }
    // Print each value and address, then increment the pointer
    ptr=data;
    printf("Third element: %d\n",*(ptr+2));
    printf("Last element: %d\n",*(ptr+4));
    // Reset the pointer and use pointer arithmetic to access specific elements
    
    return 0;
}
