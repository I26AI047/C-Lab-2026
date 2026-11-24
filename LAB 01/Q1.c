#include<stdio.h>

int main()
{
    float P, R, T;
    
    printf("The value of P is: ");
    scanf("%f", &P); 
    
    printf("The value of R is: ");
    scanf("%f", &R); 
    
    printf("The value of T is: ");
    scanf("%f", &T); 
    
    float SI = (P * R * T) / 100.0;
    
    printf("The calculated Simple Interest is %.2f\n", SI); 
    
    return 0;
}
