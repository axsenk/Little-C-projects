#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult); // Don't change this line

    // Write your code below
    if (age>=12){
        if (height>150){
            if (age>=15){
                printf("You can ride by yourself!");
            }
            else{
                if(hasAdult==1){
                    printf("You can ride with adult supervision!");
                }
                else{
                    printf("Sorry, you need an adult with you");
                }
            }

        }
        else{
            printf("Sorry, you are not tall enough");
        }
    }
    else{
        printf("Sorry, you are too young");
    }
    return 0;
}
