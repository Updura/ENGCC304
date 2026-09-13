#include <stdio.h>

int main() {
    int num[5];
    int i;
    int max;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    printf("Max = %d", max);
    return 0;
}