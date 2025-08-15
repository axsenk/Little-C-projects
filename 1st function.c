#include <stdio.h>

// Declare your function here
void printNumbers(){
    for(int i =1;i<=5;i++){
        printf("%d ",i);
    }
    printf("\n");
}

int main() {
    // Call your function twice here
    printNumbers();
    printNumbers();
    return 0;
}
