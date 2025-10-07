#include<stdio.h>

int main() {
    int grade[10];

    for (int i = 0; i < 10; i++) {
        printf("Please enter students grades\n");
        scanf("%d",&grade[i]);
    }

    printf("\n");

    for (int i = 9; i >= 0; i--) {
        printf("%d\n",grade[i]);
    }

    printf("\n");


    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum = sum + grade[i];
    }

    printf("The sum of the grades are %d\n", sum / 10);

    return 0;
}
