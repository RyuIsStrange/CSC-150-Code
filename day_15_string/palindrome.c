// Doesn't work
// Looking into why later

#include<stdio.h>

int main() {
    char str[100],rev[100];
    int i,j=0;

    printf("Please input a string.\n");
    scanf("%s",str);

    while(str[i] != '\0') {
        i++;
    }

    for(int k = i; k >= 0; k--) {
        rev[j] = str[k];
        j++;
    }

    if (rev == str) {
        printf("The string is a palindrome!\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}