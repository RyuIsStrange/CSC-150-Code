#include<stdio.h>

int main() {
  int make_year = 2017;
  int mileage = 95523;
  char type_vec = 'C';
  char fuel = 'P';
  int seats = 4;

  printf("My vehicle type is %c. ", type_vec);
  printf("Its make year is %i. ", make_year);
  printf("It has a mileage of %i KM. ", mileage);
  printf("It requires the fuel type of %c. ", fuel);
  printf("It also has %i seats.\n", seats);

  printf("My vehicle type is %c. Its make year is %i. It has a mileage of %i KM. It requires the fuel type of %c. It also has %i seats.\n"
	,type_vec,make_year,mileage,fuel,seats);

  return 0;
}
