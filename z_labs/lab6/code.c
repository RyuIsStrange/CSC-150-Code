#include<stdio.h>

void print_name() {
   printf("Ryan Sheeley\n");
}

void print_num() {
   for (int i = 1; i <=10; i++) {
      printf("%d ",i);
   }
   printf("\n");
}

void print_n_m(int x, int y) {
   for (int i = x; i <= y; i++) {
      printf("%d ", i);
   }
   printf("\n");
}

int power(int x, int times) {
   int ret = 1;
   // if (x == 0) {
   //    return 1;
   // }
   for (int i = 1; i <= times; i++) {
      ret *= x;
   }
   return ret;
}

char grade(int percent) {
   if (percent >= 90) {
      return 'A';
   } else if (percent < 90 && percent > 80) {
      return 'B';
   } else if (percent < 80 && percent > 70) {
      return 'C';
   } else if (percent < 70 && percent > 60) {
      return 'D';
   } else if (percent < 60) {
      return 'F';
   } else {
	   printf("You inputted something that isn't a valid percent.\n");
   }
}






int main() {
   //print_name();
   //print_num();
   int n = 50;
   int m = 100;
   // print_n_m(n,m);
   int p = 3;
   int times = 2;
   printf("The power of 3 to the 2nd is: %d\n", power(p,times));
   int per = 95;
   // printf("You got a %c\n", grade(per));


   return 0;
}
