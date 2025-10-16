#include<stdio.h>

int main() {
    int array[10];

    printf("Input 10 numbers\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d",&array[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < array[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
