#include<stdio.h>

int main() {
    char str[100];
    int i=0;

    printf("Please input a string.\n");
    scanf("%s",str);

    while(str[i] != '\0') {
        i++;
    }

    for(int k = i; k >= 0; k--) {
        printf("%c",str[k]);
    }

    printf("\n");

    return 0;
}