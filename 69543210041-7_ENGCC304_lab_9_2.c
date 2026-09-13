#include <stdio.h>

int main() {
    int num[5];
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++) {
        sum = sum + num[i];
    }
    printf("Sum = %d", sum);
    return 0;
}