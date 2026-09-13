#include <stdio.h>

int main() {
    int num[4];
    int i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 3; i >= 0; i--) {
        printf("%d\n", num[i]);
    }
    return 0;
}