#include <stdio.h>
#include <string.h>

int main(){
char str[100];
char alpha;
int flag;

puts("Enter the string:");
scanf("%s",str);

printf("Enter the character you want to search in the string:");
scanf(" %c",&alpha);



for(int i = 0;i<strlen(str); i++){
    if(str[i] == alpha){
        flag = 1;
        break;
    }
}

if(flag == 1){
    printf("The given character is present in the string");
}
else{
    printf("The given character is not present in the string");
}


return 0;
}