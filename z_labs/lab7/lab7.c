#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inital_board(char board[][3]);
void print_board(char board[][3]);
int user_move(char board[][3], int row, int col);
void computer_move(char board[][3]);
int winner(char board[][3]);

int main() {
    srand(time(NULL));
    char board[3][3];
    int row, col;
    int good_move;

    inital_board(board);

    while (!winner(board)) {
        print_board(board);

        printf("\nPick where to put an x: (row, col) ");
        scanf("%d %d", &row, &col);

        good_move = user_move(board, row, col);
        if (good_move) {
                printf("Successfully put an x at %d %d\n", row, col);
                print_board(board);
                if (winner(board)) {
                    break;
                }
                computer_move(board);
        } else {
            printf("Invalid move go again.\n");
        }
    }

    return 0;
}

void inital_board(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }
}

void print_board(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int user_move(char board[][3], int row, int col) {
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return 0;
    }

    if (board[row][col] == '_') {
        board[row][col] = 'x';
        return 1;
    } else {
        return 0;
    }
}

void computer_move(char board[][3]) {
    int state = 1;
    
    while (state) {
	    int row = rand() % 3;
	    int col = rand() % 3;
    	
        if (board[row][col] == '_') {
	        board[row][col] = 'o';
            printf("\nThe computer put an o at %d %d\n", row, col);
	        state = 0;
	    }
    }
}


int winner(char board[][3]) {
    // Checks rows for win
    for (int i = 0; i < 3; i++) {
        int row_x = 0;
        int row_o = 0;
        for (int j = 0; j < 3; j++ ) {
            if (board[i][j] == 'x') {
                row_x++;
            } else if (board[i][j] == 'o') {
                row_o++;
            }

            if (row_x == 3) {
                printf("You won the game!\n");
                return 1;
            } else if (row_o == 3) {
                printf("You lost the game. :( \n");
                return 1;
            }
        }
    }
    
    // Checks col for win
    for (int i = 0; i < 3; i++) {
        int col_x = 0;
        int col_o = 0;
        for (int j = 0; j < 3; j++ ) {
            if (board[j][i] == 'x') {
                col_x++;
            } else if (board[j][i] == 'o') {
                col_o++;
            }

            if (col_x == 3) {
                printf("You won the game!\n");
                return 1;
            } else if (col_o == 3) {
                printf("You lost the game. :( \n");
                return 1;
            }
        }
    }

    int dia_o, dia_x = 0;
    for (int i = 0; i < 3; i++) {
        if (board[i][i] == 'x') {
            dia_x++;
        }
        if (board[i][i] == 'o') {
            dia_o++;
        }
    }
    
    if (dia_x == 3) {
        printf("You won the game!\n");
        return 1;
    } else if (dia_o == 3) {
        printf("You lost the game. :( \n");
        return 1;
    }

    dia_o, dia_x = 0;
    for (int i = 3; i > 0; i--) {
        if (board[i][i] == 'x') {
            dia_x++;
        }
        if (board[i][i] == 'o') {
            dia_o++;
        }
    }

    if (dia_x == 3) {
        printf("You won the game!\n");
        return 1;
    } else if (dia_o == 3) {
        printf("You lost the game. :( \n");
        return 1;
    }

    int tie = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '_') {
                tie++;
            }
        }
    }

    if (tie < 1) {
        printf("The game was a tie!\n");
        return 1;
    }

    return 0;
}
