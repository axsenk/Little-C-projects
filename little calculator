#include <stdio.h>
#include <stdlib.h>

// Declare your functions here
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int calculate(int a,int b,char operation);

int main() {
    // Your code here
    int a;
    int b;
    char operation;
    int result;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&operation);
    if (operation=='q'){
        return 0;
    }
    result = calculate(a,b,operation);
    if (result==000){
        printf("Invalid input\n");
    }
    else{
    printf("%d",result);
}
return 0;
}

// Implement your functions here
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    if(b==0){
        return -1;
    }
    return a/b;
}
int calculate(int a,int b,char operation){
    if(operation=='+'){
        return add(a,b);
    }
    else if (operation=='-'){
        return subtract(a,b);
    }
    else if(operation=='*'){
        return multiply(a,b);
    }
    else if (operation=='/'){
        
        if (divide(a,b)==-1){
            return 000;
        }
        else{
            return divide(a,b);
        }
    }
    else {
        return 000;
     }
}
