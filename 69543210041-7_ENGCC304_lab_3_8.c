#include <stdio.h>

int main() {
    int price, memberStatus;

    scanf("%d", &price);
    scanf("%d", &memberStatus);

    if (price >= 300 || memberStatus == 1) {
        printf("Free Shipping");
    } else {
        printf("Shipping Required");
    }

    return 0;
}