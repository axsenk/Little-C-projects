#include <stdio.h>

// Write your convertTemperature function here
float convertTemperature(float celsius,char unit){
    if (unit=='F'){
        return (celsius*9.0/5.0)+32;
    }
    
    else if(unit=='K'){
        return (celsius+273.15);
    }
    else{
        return(-1);
    }
}

int main() {
    // Read the temperature and unit
    float celsius;
    char unit;
    scanf("%f",&celsius);
    scanf(" %c",&unit);

    // Call convertTemperature and print the result
    float result = convertTemperature(celsius,unit);
    if (convertTemperature(celsius,unit) == -1){
         printf("Invalid unit\n");
    }
    else{
    printf("Converted temperature: %.2f\n",result);
}
    return 0;
}
