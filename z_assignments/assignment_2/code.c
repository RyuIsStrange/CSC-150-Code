// Name: Ryan Sheeley
// Class: CSC-150 Computer Science 1
#include<stdio.h>

int main() {
    int firstNum;
    int secNum;
    char operator;

    printf("Input a math quation in the format: <num> <symbol> <num>\n");
    scanf("%d %c %d",&firstNum, &operator, &secNum);

    if (operator == '+') {
        printf("%d + %d = %d\n",firstNum, secNum, firstNum + secNum);
    } else if (operator == '-') {
        printf("%d - %d = %d\n",firstNum, secNum, firstNum - secNum);
    } else if (operator == '*') {
        printf("%d * %d = %d\n",firstNum, secNum, firstNum * secNum);
    } else if (operator == '/') {
        if ((firstNum % secNum) != 0) {
            printf("%d / %d = %d with a remainder of %d\n",firstNum, secNum, firstNum / secNum, firstNum % secNum);
        } else {
            printf("%d / %d = %d\n",firstNum, secNum, firstNum / secNum);
        }
    } else if (operator == '%') {
        printf("%d %c %d = %d\n",firstNum, operator, secNum, firstNum % secNum);
    } else {
        printf("Invalid Operator\n");
    }

    return 0;
}