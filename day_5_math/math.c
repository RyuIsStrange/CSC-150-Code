#include<stdio.h>

int main() {
    int userNum;
    int mod = 2;

    printf("Input your number: ");
    scanf("%i", &userNum);

    printf("Output: %i\n", userNum % mod);

    return 0;
}
