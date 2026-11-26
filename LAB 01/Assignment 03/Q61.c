#include <stdio.h>

void palindrome();

void palindrome(int a){
    int rem,rev=0,original;
    original = a ;
    while(a>0){rem=a%10;
    rev=rev*10+rem;
    a=a/10;}

    if(original==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}

int main(){
    int n;

    printf("Enter n:");
    scanf("%d",&n);
    palindrome(n);

return 0;
}