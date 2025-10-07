#include<stdio.h>

int main() {
    int x;
    printf("Enter a number, I will tell you if its odd or even.\n");
    scanf("%i",&x);

    if ((x % 2) == 0) {
        printf("EVEN!\n");
    } else  {
        printf("ODD!\n");
    }

    return 0;
}