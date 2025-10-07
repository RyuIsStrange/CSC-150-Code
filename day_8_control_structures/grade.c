#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
   char grade;

   printf("Please enter your grade letter\n");
   scanf("%c",&grade);

   if ((grade == 'A') || (grade == 'a')) {
      printf("Your grade is somewhere between 100-90%%\n");
   } else if ((grade == 'B') || (grade == 'b')) {
	   printf("Your grade is somewhere between 89-80%%\n");
   } else if ((grade == 'C') || (grade == 'c')) {
	   printf("Your grade is somewhere between 79-70%%\n");
   } else if ((grade == 'D') || (grade == 'd')) {
	   printf("Your grade is somewhere between 69-60%%\n");
   } else if ((grade == 'F') || (grade == 'f')) {
	   printf("Your grade is somewhere between 59-0%%\n");
   } else {
	   printf("You inputted something that isn't a letter grade.\n");
   }

    return 0;
}
