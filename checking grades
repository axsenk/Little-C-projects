#include <stdio.h>

// Function prototypes
float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);

int main() {
    // TODO: Declare and initialize the grades array with [85, 92, 78, 65, 88]
   
    int size;
    scanf("%d",&size);
    int grades[size];
    for (int i = 0;i<size;i++){
        scanf("%d",&grades[i]);
    }
    // TODO: Calculate and display the average grade
    float average = calculateAverage(grades,size);
    printf("Average grade: %.2f\n",average);
    // TODO: Find and display the highest grade
    int highest = findHighestGrade(grades,size);
    printf("Highest grade: %d\n",highest);
    printf("\n");
    // TODO: Display letter grade for each numerical grade
    printf("Student Grades:\n");
    for (int i =0;i<size;i++){
        int value = i+1;
        char letter = determineLetterGrade(grades[i]);
        printf("Student %d: %d - %c\n",value,grades[i],letter);
    }
    return 0;
}

float calculateAverage(int grades[], int size) {
    // TODO: Calculate and return the average grade
    float sum=0;
    for (int i=0;i<size;i++){
       sum += grades[i];
    }
    return sum/size;
}

int findHighestGrade(int grades[], int size) {
    // TODO: Find and return the highest grade
    int high = grades[0];
    for(int i =1;i<size;i++){
        if (grades[i]>=high){
            high = grades[i];
        }
    }
    return high;
}

char determineLetterGrade(int grade) {
    // TODO: Determine and return the letter grade
   if (grade<=100 && grade>=90){
    return 'A';
   }
   else if (grade>=80){
    return 'B';
   }     
   else if (grade>=70){
    return 'C';
   }     
   else if (grade>=60){
    return 'D';
   }
   else{
    return 'F';
   }          
    
}
