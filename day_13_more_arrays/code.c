#include<stdio.h>

int main() {
    int max, min;
    int array[10];

    for (int i = 0; i < 10; i++){
        printf("Input a number: ");
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            max = array[i];
	    min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Print a newline between the inputs and the outputs to make easier to read
    printf("\n");

    printf("The max number is: %d\n", max);
    printf("The min number is: %d\n", min);

    return 0;
}
