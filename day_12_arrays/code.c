#include<stdio.h>

int main() {
    int grade[10];

    // Add the grades to the array with scanf
    for (int i = 0; i < 10; i++) {
        printf("Please enter students grades\n");
        scanf("%d",&grade[i]);
    }

    printf("\n");

    // Print the grades in reverse order
    for (int i = 9; i >= 0; i--) {
        printf("%d\n",grade[i]);
    }

    printf("\n");

    // Average of the Grades
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum = sum + grade[i];
    }

    printf("The average of the grades are %d\n", sum / 10);

    // Move the grades from "grade" to final grade
    int final_grades[10];

    for (int i = 0; i < 10; i++) {
        final_grades[i] = grade[i];
    }

    // Print final grades
    printf("Final grades are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",grade[i]);
    }

    return 0;
}
