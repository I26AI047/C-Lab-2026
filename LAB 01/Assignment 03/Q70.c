#include <stdio.h>
void vowel(char);

void vowel(char ch){
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
        printf("The character is a vowel");
        break;
        default:printf("The character is not a vowel");
    }
   
}


int main(){
    char ch;
    printf("Enter the character:");
    scanf(" %c",&ch);

    vowel(ch);


return 0;
}