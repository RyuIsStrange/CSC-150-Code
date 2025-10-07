#include<stdio.h>

int main(){
  // Create the variables "i,c,f"
  int i;
  char c;
  float f;

  // Prompt the user for input
  printf("Input a number, char, and float: ");

  // Read the user input
  scanf("%i %c %f", &i,&c,&f);

  // Print the input back to the user
  printf("You inputed %i, %c, %f\n", i,c,f);

  return 0;
}
