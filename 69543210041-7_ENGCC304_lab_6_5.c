#include <stdio.h>
int main() {
    int num;
    int sum = 0;
    int count = 0;
    int average;
    scanf("%d", &num);
    while (num != -1) {
        sum = sum + num;
        count++;
        scanf("%d", &num);
    }
    average = sum / count;
    printf("Average = %d", average);
    return 0;
}