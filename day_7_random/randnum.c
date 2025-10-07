#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    // Random number within range
    int min = 10;
    int max = 20;
    int c = rand() % (max - min + 1) + min;

    printf("Value of c is: %i\n",c);

    return 0;
}
