#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];

    int len = 0;
    int k = 0;

  
    printf("Enter the string 1: ");
    fgets(s1, sizeof(s1), stdin);

    
    while (s1[k] != '\0') {
        len++;
        k++;
    }

   
    for (int i = 0; i < len; i++) {
        s2[i] = s1[i];
    }
    s2[len] = '\0';

    printf("The string s2 is a copy of string s1:\n");
    printf("%s", s2);

    return 0;
}
