#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // seed random with time
    srand(time(NULL));
    int a = rand() % (100 - 23 + 1) + 23;
    int b = rand() % (20 - 0 + 1);
    int c = rand() % (4 - 0 + 1);

    int anwser = (a + b) * c;
    int userinput;

    printf("What is the anwser of (%d + %d) * %d\n",a,b,c);
    scanf("%d",&userinput);

    if (userinput == anwser) {
        printf("Congrats you got it right!\n");
    } else {
        printf(":( Sorry you got it wrong.\n");
    }

    return 0;
}
