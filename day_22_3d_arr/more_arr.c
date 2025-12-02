#include<stdio.h>

int funsum(int x[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
	sum += x[i];
    }
    return sum;
}

int main() {
    int a[10] = {6,4,2,10,45,50,100,2,95,10};
    int aSize = 10;


    int s = funsum(a, aSize);
    printf("The sum of 1D array elements is %d\n", s);

    return 0;
}