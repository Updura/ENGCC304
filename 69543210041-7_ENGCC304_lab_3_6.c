#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Max = %d", num1);
        } else {
            printf("Max = %d", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("Max = %d", num2);
        } else {
            printf("Max = %d", num3);
        }
    }

    return 0;
}