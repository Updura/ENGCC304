#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number >= 10 && number <= 20) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}