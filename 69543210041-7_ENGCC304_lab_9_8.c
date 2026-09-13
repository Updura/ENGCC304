#include <stdio.h>

int main() {
    int score[5];
    int i;
    int count = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 5; i++) {
        if (score[i] > 50) {
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}