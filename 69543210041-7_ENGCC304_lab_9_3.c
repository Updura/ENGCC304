#include <stdio.h>

int main() {
    int score[4];
    int i;
    int sum = 0;
    int average;
    for (i = 0; i < 4; i++) {
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 4; i++) {
        sum = sum + score[i];
    }
    average = sum / 4;
    printf("Average = %d", average);
    return 0;
}