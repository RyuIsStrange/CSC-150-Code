#include<stdio.h>

int main() {
    char abc[100];
    int found,i = 0;

    printf("Please input a string\n");
    scanf("%s",abc);

    while(abc[i] != '\0') {
        if (abc[i] == 'a' || abc[i] == 'b' || abc[i] == 'c') {
            found = 1;
            break;
        }
        i++;
    }

    if (found == 1) {
        printf("This string contains a, b, or c!\n");
    } else {
        printf("This string doesn't contains a, b, or c!\n");
    }

    return 0;
}
