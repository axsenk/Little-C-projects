#include <stdio.h>
#include <math.h>

// Declare your functions here
int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i =2;i<=sqrt(num);i++){
      if(num %i==0){
    return 0;
      }
    }
    return 1;
}
int sumOfPrimes(int a,int b){
    int sum =0 ;
     for(int j =a;j<=b;j++){
           if (isPrime(j)){
            sum += j;
           }
     }
     return sum;   
}  

int main() {
    int start;
    int end;
    int result;
    scanf("%d",&start);
    scanf("%d",&end);

    // Your code here
     if(start<=0 || end<=0 || start>=end){
       printf("Invalid input\n");
       return 1;
     }
     result = sumOfPrimes(start,end);
     printf("%d\n",result);
   
    return 0;
}
