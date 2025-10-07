#include<stdio.h>

int main() {
    int year;
    char abrv1;
    char abrv2;

    printf("Please input the current year: ");
    scanf("%i", &year);

    printf("Please input your state\'s abbreviation: ");
    scanf(" %c%c", &abrv1, &abrv2);

    printf("The current year is %i and your state\'s abbreviation is %c%c\n", year, abrv1, abrv2);

    return 0;
}
