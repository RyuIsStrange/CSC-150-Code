#include<stdio.h>

float tax(int price) {
    float new_price = price * 1.06;
    return new_price;
}

int main() {
    int n;
    
    while(1) {
        printf("Please input the price:\n");
	    scanf("%d",&n);
	    printf("The price with tax is: %f\n", tax(n));
        
        if (n == 0) {
	        break;
        }
    }

    return 0;
}
