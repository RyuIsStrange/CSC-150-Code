#include<stdio.h>

int main() {
   int base,exponent;
   int sum = 1;
   printf("Please input a base and exponent: <base> <exponent> ");
   scanf("%d %d", &base, &exponent);

   for(int i=1; i <= exponent;i++) {
     sum = sum * base;
   }

   printf("Anwser is: %d\n", sum);
   return 0;
}
