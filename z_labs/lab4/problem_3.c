#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  srand(time(NULL));

  int rand_num = rand() % (100 - 1); // Generate number between 1-100
  int guess;
  int attempts = 0;

  printf("Guess a number between 1 - 100\n");
  do {
    attempts++;
    printf("Enter your number: ");
    scanf("%d",&guess);

    if (guess > rand_num) {
      printf("Too high. Guess again.\n");

      printf("You have %d attemps left.\n", 7 - attempts);
    } else if (guess < rand_num) {
      printf("Too low. Guess again.\n");

      printf("You have %d attemps left.\n", 7 - attempts);
    } else {
      printf("Your are correct\n");
    }
  } while ((guess != rand_num) && (attempts < 7));

  return 0;
}