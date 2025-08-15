#include <stdio.h>

int main() {
    int temperature;
    char scale;
    scanf("%d", &temperature);
    scanf(" %c", &scale);
    // Don't change above this line
    
    // Write your code here
    if (scale=='F'){
        temperature=(temperature-32)*5/9;
    }
    if (temperature<0){
        printf("Freezing");
    }
    else if (temperature>=0 && temperature<=20){
        printf("Cold");
    }
    else if (temperature>=21 && temperature<=30){
        printf("Pleasant");
    }
    else {
        printf("Hot");
    }
    return 0;
}#include <stdio.h>

int main() {
    int temperature;
    char scale;
    scanf("%d", &temperature);
    scanf(" %c", &scale);
    // Don't change above this line
    
    // Write your code here
    if (scale=='F'){
        temperature=(temperature-32)*5/9;
    }
    if (temperature<0){
        printf("Freezing");
    }
    else if (temperature>=0 && temperature<=20){
        printf("Cold");
    }
    else if (temperature>=21 && temperature<=30){
        printf("Pleasant");
    }
    else {
        printf("Hot");
    }
    return 0;
}
