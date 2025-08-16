#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);
    // Don't change above this line
    
    // Write your code here
    grade = grade/10;
    switch(grade){
        case 10:
        printf("A\n");
        break;
        case 9:
        printf("A\n");
        break;
        case 8:
        printf("B\n");
        break;
        case 7:
        printf("C\n");
        break;
        case 6:
        printf("D\n");
        break;
        default:
        printf("F");
    }
    return 0;
}
