#include<stdio.h>

int tri_area(int base, int height) {
   int area = 0.5 * (base * height);
   return area;
}

int main() {
  int base, height;

  printf("Enter the base and height of your triangle: (base height)\n");
  scanf("%d %d", &base, &height);

  printf("The area of your triangle is: %d\n", tri_area(base, height));

  return 0;
}
