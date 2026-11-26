#include <stdio.h>

int main(){
char str[100];
printf("Enter the string:");
fgets(str,sizeof(str),stdin);
int length = 0;

int i = 0;
while(str[i]!='\0' && str[i]!='\n'){
    length++;
    i++;
}
printf("The length of the string is %d",length);
return 0;
}