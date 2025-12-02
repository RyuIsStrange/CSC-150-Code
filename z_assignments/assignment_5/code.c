// Name: Ryan
// Class: CSC-150 Computer Science 1
#include<stdio.h>

void printNumsDecending(int start, int end);

float feet2meters(float f_length);

float meters2feet(float m_length);

int factorial(int n);

float average(int a, int b, int c);

int main() {
    int numBig, numSmall, fac, avgOne, avgTwo, avgThree;
    float feet2Meter, meter2Feet;

    printf("Enter start number (larger): ");
    scanf("%d", &numBig);
    printf("Enter end number (smaller): ");
    scanf("%d", &numSmall);
    printNumsDecending(numBig,numSmall);

    printf("Enter length in feet: ");
    scanf("%f", &feet2Meter);
    printf("%f feet = %f meters\n", feet2Meter, feet2meters(feet2Meter));

    printf("Enter length in meter: ");
    scanf("%f", &meter2Feet);
    printf("%f meters = %f feet\n", meter2Feet, meters2feet(meter2Feet));

    printf("Enter a positive integer for factorial: ");
    scanf("%d", &fac);
    printf("Factorial of %d = %d\n", fac, factorial(fac));

    printf("Enter three integers to average (# # #): ");
    scanf("%d %d %d", &avgOne,&avgTwo,&avgThree);
    printf("Average = %f\n",average(avgOne, avgTwo, avgThree));

    return 0;
}


void printNumsDecending(int start, int end) {
    printf("Numbers from %d to %d\n", start, end);
    for (int i = start; i >= end; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// Values for conversion from: https://www.unitconverters.net/length/feet-to-meters.htm
float feet2meters(float f_length) {
    return f_length * 0.3048;
}

// Values for conversion from: https://www.unitconverters.net/length/meters-to-feet.htm
float meters2feet(float m_length) {
    return m_length * 3.280839895;
}


int factorial(int n) {
    int result = n;
    for(int i = n - 1; i > 0; i--) {
        result *= i;
    }
    return result;
}

float average(int a, int b, int c) {
    return (a + b + c) / 3;
}