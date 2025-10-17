// Name: Ryan
// Class: CSC-150 Computer Science 1
#include<stdio.h>

int main() {
    /* 
        Initialize the rows of the pyramid
        Then spaces to the star
        Then how many stars to print
        Set everything to 1 to make so math later works
    */
    int rows,spaces,stars = 1;

    printf("How many rows should the pyramid have?\n");
    scanf("%d",&rows);

    /*
        Next we are going to calculate the spaces
                        *
                       ***
                      *****
        Notice how the stars add 2 each row?
        So to calculate the spaces we will calculate the "max stars"
        Then divide that by 2 then minus 1 then we will get the starting star spaces
        After the first star after each row we will remove 1 spaces so the star will fill out the pyramid
    */
    // Spaces are (max / 2) - 1
    spaces = ((1 + (2 * rows)) / 2) - 1;

    // Loop for the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print the spaces
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print the stars
        for (int k = 1; k <= stars; k++) {
            printf("*");
        }

        /*
            Print the new line for the pyramid
            Then calculate new spaces and stars
        */
        printf("\n");
        spaces = spaces - 1;
        stars = stars + 2;
    }

    return 0;
}