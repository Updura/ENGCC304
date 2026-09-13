#include <stdio.h>

int main() {
    int num[5];
    int i;
    int count = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}