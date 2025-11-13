#include<stdio.h>

int main() {
    // 4 rows
    // 3 columns
    int arr[4][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
