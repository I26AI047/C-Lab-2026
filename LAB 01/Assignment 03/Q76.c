#include <stdio.h>

int main(){
char str[100];

printf("Enter the string:\n");
scanf("%s",str);

int length=0;
int k = 0;

while(str[k]!='\0'){
    length++;
    k++;
}

printf("The reversed string is:\n");

for(int i = length;i>=0;i--){
    printf("%c",str[i]);
}
return 0;
}