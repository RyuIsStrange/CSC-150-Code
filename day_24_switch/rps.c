#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void player_choice(int a) {
   switch (a) {
      case 1:
         printf("You chose rock\n");
         break;
      case 2:
         printf("You chose paper\n");
         break;
      case 3:
         printf("You chose scissors\n");
         break;
      default:
         printf("Invalid choice\n");
         break;
   }
}

void computer_choice(int a) {
   switch (a) {
      case 1:
         printf("Computer chose rock\n");
         break;
      case 2:
         printf("Computer chose paper\n");
         break;
      case 3:
         printf("Computer chose scissors\n");
         break;
      default:
         printf("Invalid choice\n");
         break;
   }
}


void check_win(int player, int computer) {
   if (player == computer) {
      printf("The game was a tie\n");
   } else if (player == 1 && computer == 3) {
      printf("You won!\n");
   } else if (player == 2 && computer == 1) {
      printf("You won!\n");
   } else if (player == 3 && computer == 2) {
      printf("You won!\n");
   } else {
      printf("You lost. :(\n");
   }
}

int main() {
   srand(time(NULL));
   int play;

   printf("Choose RPS (1 Rock, 2 Paper, 3 Scissors): ");
   scanf("%d", &play);

   int computer = rand() % (play, 3) + 1;
   player_choice(play);
   computer_choice(computer);

   check_win(play, computer);

   return 0;
}
