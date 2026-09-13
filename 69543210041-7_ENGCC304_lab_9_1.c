#include <stdio.h>

int main() {
    int num[3];
    int i;
    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}