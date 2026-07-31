#include <stdio.h>
int main() {
    int num;
    int max;
    int i;
    scanf("%d", &max);
    for (i = 2; i <= 5; i++) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }
    printf("Max = %d", max);
    return 0;
}