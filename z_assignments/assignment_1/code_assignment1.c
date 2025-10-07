// Name: Ryan
// Course: CSC-150 - Computer Science

#include<stdio.h>

int main() {
    // Create the variables
    int age;
    char firstInitial;
    char secondInitial;
    char thirdInitial;
    int favNumber;
    char desiredGrade;
    float gpa;

    // Prompmt the user for their age
    printf("What is your age? ");
    scanf("%i",&age); // Read the integer input and set it to the variable "age"

    // Prompmt the user for their initials
    printf("What is your first, second, and third initial? (Inputed as # # #) ");
    // Read the three char inputs and set it to the three char 'initial' variables
    scanf(" %c %c %c", &firstInitial, &secondInitial, &thirdInitial); 

    // Prompmt the user for their favorite number, only integers no floats
    printf("What is your favorite number? ");
    // Read the integer input and set it to the variable "favNumber"
    scanf("%i", &favNumber); 

    // Prompmt the user for their desired grade
    printf("What is your desired letter grade? " );
    // Read the char input and set it to the variable "desiredGrade"
    scanf(" %c", &desiredGrade); 

    // Prompmt the user for their GPA
    printf("What is your GPA? ");
    // Read the float input and set it to the variable "gpa"
    scanf("%f", &gpa);

    // Print a new line so that the inputs are separated from the output print
    printf("\n");

    // Print all the information back to the user
    printf("Your age is %i, your initials are %c%c%c, your favorite number is %i!\n",age,firstInitial,secondInitial,thirdInitial,favNumber);
    printf("You want a %c in this class, and your GPA is %f\n",desiredGrade,gpa);

    return 0;
}