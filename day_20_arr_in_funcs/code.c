#include<stdio.h>

int sum(int a[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += a[i];
    }

    return sum;
}

int largest_num(int a[], int size) {
    int max = a[0];

    for (int i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int arr[10];
    int size = 10;

    printf("Input 10 numbers\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The sum is: %d\n", sum(arr,size));

    printf("The largest number in the array is: %d\n", largest_num(arr,size));

    return 0;
}
