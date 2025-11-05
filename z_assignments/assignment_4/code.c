#include<stdio.h>

int open_seats(int seats[10]) {
    int all_seats[10] = {1,2,3,4,5,6,7,8,9,10};
    int c = 0;

    for(int i = 0; i < 10; i++) {
        if (seats[i] == all_seats[i]) {
            c++;
        }
    }

    if (c == 10) {
        return 0;
    } else {
        return 1;
    }
}

// Checks if the seat number is taken already
int is_taken(int seat_arr[10], int seat_num) {
    if (seat_num > 10 || seat_num < 0) {return 1;}

    for (int i = 0; i < 10; i++) {
        if (seat_arr[i] == seat_num) {
            return 1; // 1 equals true
        } else if (i == 9) {
            return 0; // 0 equals false
        }
    }
}

int main() {
    int taken_seats[10] = {0,0,0,0,0,0,0,0,0,0};
    int seat, temp;

    printf("Welcome to seat reserving system.\n");
    while(open_seats(taken_seats)) {
        for (int i = 1; i <= 10; i++) {
            if (is_taken(taken_seats, (i))) {
                printf("Seat %d: unavailable\n", i);
            } else {
                printf("Seat %d: available\n", i);
            }
        }
        
        printf("\nEnter the seat number you want to reserve (1-10): ");
        scanf("%d", &seat);

        if (!is_taken(taken_seats, seat)) {
            printf("Seat %d reserved.\n\n", seat);
            temp = seat - 1;
            taken_seats[temp] = seat;
        } else if (seat <= 10 && seat >= 1) {
            printf("Sorry, seat %d is already reserved.\n\n", seat);
        } else {
            printf("Sorry, we couldn't find a seat %d\n\n", seat);
        }
    }

    printf("All seats reserved.\nPlane is taking off now!\n");

    return 0;
}