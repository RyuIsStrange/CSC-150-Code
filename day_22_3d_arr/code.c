#include<stdio.h>

int main() {
    int a[2][3][4];
    int c = 2 * 3 * 4;

    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d inputs left: ", c);
                scanf("%d", &a[k][i][j]);
                c--;
            }
        }
    }

    printf("\n");

    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", a[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
