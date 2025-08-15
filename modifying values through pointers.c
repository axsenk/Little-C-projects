#include <stdio.h>

int main() {
    // TODO: Write your code here
    // Declare variables and pointers
    int age = 25;
    char grade = 'A';
    float temperature = 98.6;
    int *age_ptr;
    char *grade_ptr;
    float *temp_ptr;
    // Assign addresses to pointers
    age_ptr = &age;
    grade_ptr = &grade;
    temp_ptr = &temperature;
    // Print values through pointers
    printf("Age: %d\n",*age_ptr);
    printf("Grade: %c\n",*grade_ptr);
    printf("Temperature: %.1f\n",*temp_ptr);
    // Modify values through pointers
    *age_ptr = 30;
    *grade_ptr = 'B';
    *temp_ptr = 99.5;
    // Print modified values from original variables
    printf("Age: %d\n",age);
    printf("Grade: %c\n",grade);
    printf("Temperature: %.1f\n",temperature);
    
    return 0;
}
