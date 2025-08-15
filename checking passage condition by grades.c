#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    // Don't change above this line
    
    // Write your code here
    if (score<0 || score>100){
        printf("Invalid score\n");
    }
    else{
        char* p ="Passed";
        char* f ="Failed";
        char* result = (score>=60)? p:f;

        score = score/10;
        switch(score){
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
             printf("F\n");
             break;
        }
        printf("Status: %s\n",result);
    }
    return 0;
}
