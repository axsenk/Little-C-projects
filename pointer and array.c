include <stdio.h>

int main() {
    // TODO: Write your code here
    // 1. Declare and initialize the array 'numbers' with {10, 20, 30, 40}
    int numbers[4]={10,20,30,40};
    // 2. Declare a pointer to integer named 'ptr'
    int *ptr;
    // 3. Assign the array name to the pointer
    ptr = numbers;
    // 4. Print all the required addresses and values
    printf("Array name address: %p\n",numbers);
    printf("First element address: %p\n",numbers[0]);
    printf("Pointer address: %p\n",ptr);
    printf("Value via array name: %d\n",numbers[0]);
    printf("Value via pointer: %d\n",*ptr);

    
    return 0;
}
