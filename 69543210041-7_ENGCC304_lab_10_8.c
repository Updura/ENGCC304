#include <stdio.h>

int main() {
    int num[5];
    int target;
    int count = 0;
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < 5; i++) {
        if (num[i] == target) {
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}