#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));

    int a = 10;
    int b = 1;
    int c = rand();

    printf("%d\n",c);

    return 0;
}
