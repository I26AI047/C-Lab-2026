#include <stdio.h>

int factorial();

int factorial(int n){
    if(n==0 || n==1){
        return 1;

    }
    else{
        return n*factorial(n-1);
    }
}
    int main(){
        int n;

        printf("Enter the value of n:");
        scanf("%d",&n);
        factorial(n);

        printf("The factorial of %d is %d",n,factorial(n));
    }
