#include<stdio.h>
#include<ctype.h>

int is_same_letter(char c_one, char c_two) {
   if (tolower(c_one) == tolowwer(c_two)) {
      return 1;
   } else {
      return 0;
   }
}

int main() {
   char lower, upper;
   printf("Enter a lowercase letter: ");
   scanf("%c", &lower);

   printf("Enter a uppercase letter: ");
   scanf("%c", &upper);

   int flag = is_same_letter(lower,upper);

   if (flag) {
      printf("They are the same letter\n");
   } else {
      printf("They are not the same letter\n");
   }

   return 0;
}
