#include <stdio.h>

int main() {
    int price;
    int quantity;
    int totalPrice;
    scanf("%d", &price);
    scanf("%d", &quantity);
    totalPrice = price * quantity;
    printf("Total price = %d", totalPrice);

    return 0;
}