#include<stdio.h>

int main() {
    int grade;

    printf("Input grade (0-4): ");
    scanf("%d", &grade);

    switch (grade) {
        case 4:
            printf("Perfect\n");
            break;
        case 3:
            printf("Good\n");
            break;
        case 2:
            printf("Average\n");
            break;
        case 1:
            printf("Poor\n");
            break;
        case 0:
            printf("Failing\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}