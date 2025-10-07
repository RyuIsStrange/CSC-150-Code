#include<stdio.h>

int main() {
    int x,y;
    int i,j;

    printf("Input the x of the box: ");
    scanf("%i",&x);

    printf("Input the y of the box: ");
    scanf("%i",&y);

    for (i=0; i <= x; i++) {
        for (j=0; j <= y; j++) {
            if ((i==0) || (i==x) || (j==0) || (j==y)) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
