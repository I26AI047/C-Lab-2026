#include <stdio.h>

void armstrong();

void armstrong(int a){
    int rem,sum=0,original;
    original = a ;
    while(a>0){rem=a%10;
    sum=sum+rem*rem*rem;
    a=a/10;}

    if(original==sum){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
}

int main(){
    int n;

    printf("Enter n:");
    scanf("%d",&n);
    armstrong(n);

return 0;
}