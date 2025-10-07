#include<stdio.h>

int main() {
    int size;
    int i,j;

    printf("Input the size of the triangle: ");
    scanf("%i",&size);

    for (i=1; i <= size; i++) {
        for (j=1; j <= i; j++) {
            printf("%i",j);
        }
        printf("\n");
    }

    return 0;
}
