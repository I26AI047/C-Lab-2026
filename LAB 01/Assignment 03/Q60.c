#include <stdio.h>
void evenodd(int);

void evenodd(int a){
    
    if(a==0){
        printf("The number is neither odd nor even");
    }
    else if(a%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    evenodd(a);

return 0;
}