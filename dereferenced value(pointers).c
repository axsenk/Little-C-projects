#include <stdio.h>

int main() {
    // TODO: Write your code here
    // 1. Declare and initialize the variables
    int value = 75;
    float price = 19.99;
    // 2. Declare the pointers
    int *value_ptr;
    float *price_ptr;
    // 3. Assign addresses to pointers
    value_ptr = &value;
    price_ptr = &price;
    // 4. Print the dereferenced values
    printf("Value through pointer: %d\n",*value_ptr);
    printf("Price through pointer: %.2f\n",*price_ptr);

    
    return 0;
}
