#include <stdio.h>

int main() {
    int num[3];
    int i, j, temp;
    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}