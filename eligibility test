#include <stdio.h>
#include <stdbool.h>

int isEligible;
int checkEligibility(float gpa, int creditHours, int hasViolations, int hasRecommendations) {
    isEligible = ((gpa >= 3.5 || hasRecommendations == 1) && creditHours >= 60 && hasViolations == 0);
    // Write your code here to check eligibility
    // Return 1 if eligible, 0 if not eligible
    return isEligible;
}

int main() {
    float gpa;
    int creditHours, hasViolations, hasRecommendations;
    
    // Read input values
    scanf("%f", &gpa);
    scanf("%d", &creditHours);
    scanf("%d", &hasViolations);
    scanf("%d", &hasRecommendations);
    
    // Check eligibility
    if (checkEligibility(gpa, creditHours, hasViolations, hasRecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }
    
    return 0;
}
