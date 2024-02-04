#include <stdio.h>

int main() {
    float price, original_price;
    int perc;
    float discount_factor;

    printf("Please enter the price: ");
    scanf("%f", &price);
    printf("Please enter the percentage of sale: ");
    scanf("%d", &perc);

    discount_factor = perc / 100.0;
    original_price = price / (1 - discount_factor);

    printf("The original price is: %.2f\n", original_price);

    return 0;
}
