#include <stdio.h>
int main() {
    int score;
    int sum = 0;
    int average;
    int i;
    for (i = 1; i <= 4; i++) {
        scanf("%d", &score);
        sum = sum + score;}
    average = sum / 4;
    printf("Average = %d", average);
    return 0;
}