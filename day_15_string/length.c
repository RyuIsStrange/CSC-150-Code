#include<stdio.h>

int main() {
    char str[100];
    int i=0;

    printf("Please input a string.\n");
    scanf("%s",str);

    while(str[i] != '\0') {
        i++;
    }

    printf("The length of the string is: %d\n",i);

    return 0;
}