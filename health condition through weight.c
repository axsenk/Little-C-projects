#include <stdio.h>

int main() {
    // Declare variables for weight and height
    float weight ;
    float height;
    float Bmi;
    char* category;
    // Read and validate input
    int w = scanf("%f",&weight);
    int h = scanf("%f",&height);
    if (w==1 && h==1){
        if (weight>=30 && weight<=300){
             if (height>=1.0 && height<=2.5){
                
                 // Calculate BMI
                  Bmi = weight/(height*height);
                  // Determine weight category
                   if (Bmi<18.5){
                     category = "Underweight";
                     }
                     else if(Bmi>=18.5 && Bmi<=24.9){
                      category = "Normal weight"; 
                     }
                     else if(Bmi>=25.0 && Bmi<=29.9){
                      category = "Overweight";
                     }
                     else {
                       category = "Obese";
                       }
                     // Print results
                       printf("BMI: %.1f\n",Bmi);
                     printf("Category: %s",category);
             }
             else{
                printf("Height out of range!");
             }
        }
        else{
            printf("Weight out of range!");
        }
    }
    else{
          printf("Invalid input type!");
    }
    return 0;
}
