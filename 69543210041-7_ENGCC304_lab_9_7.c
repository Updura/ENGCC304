#include <stdio.h>

int main() {
    int num[4];
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 4; i++) {
        num[i] = num[i] + 1;
    }
    for (i = 0; i < 4; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}