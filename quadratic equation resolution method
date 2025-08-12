#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main (){
    
    float a,b,c;
    float x;
    printf("Entrer les valeurs des coefficients a,b et c\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("Equation: %.2f*x²+(%.2f*x)+(%.2f)=0\n",a,b,c);
    if (a!=0){
    float d = b*b -4*a*c;
    
    if (d < 0){
        printf("Il n'ya pas de solution dans ℝ");
    }
    else if (d==0){
        x=(-b)/(2*a);
        printf("La solution dans ℝ est: %.2f\n",x);
    }
    else {
     float x1 = (-b+sqrt(d))/(2*a);
     float x2 = (-b-sqrt(d))/(2*a);
     printf("Les solutions dans ℝ sont: %.2f,%.2f\n",x1,x2);
    }
    }
    else if (a==0 && b!=0){
        x = (-c)/b;
        printf("La solution dans ℝ est: %.2f\n",x);
    }
    else if (a==0 && b==0){
        if (c==0){
            printf("Il ya une infinité de solutions dans ℝ");
        }
        else{
        printf("Il n'ya pas de solution dans ℝ");
        }
    }
    
    return(0);
}
