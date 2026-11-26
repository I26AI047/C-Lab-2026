#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];

    printf("Enter the string 1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the string 2: ");
    fgets(s2, sizeof(s2), stdin);

    int i = 0, j = 0;

    
    while (s1[i] != '\0' && s1[i] != '\n') {
        i++;
    }

    
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

   
    s1[i] = '\0';

    printf("Combined string: %s", s1);

    return 0;
}
