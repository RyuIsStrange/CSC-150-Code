#include<stdio.h>

int main() {
    int array[20], odd[20], even[20];
    int e,o = 0;

    for (int i = 0; i < 20; i++) {
        printf("Input a number: ");
        scanf("%d",&array[i]);
    }

    for (int i = 0; i<20; i++) {
        if ((array[i] % 2) == 0) {
            even[e] = array[i];
            e++;
        } else {
            odd[o] = array[i];
            o++;
        }
    }

    printf("\nAll Numbers: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ",array[i]);
    }

    printf("\nNumbers that are even: ");
    for (int i = 0; i < e; i++) {
        printf("%d ",even[i]);
    }

    printf("\nNumbers that are odd: ");
    for (int i = 0; i < o; i++) {
        printf("%d ",odd[i]);
    }
    printf("\n");

    return 0;
}
