#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
   srand(time(NULL));
   int lowrange = rand() % (80 - 0 + 1);
   int uprange = lowrange + 20;



   return 0;
}
