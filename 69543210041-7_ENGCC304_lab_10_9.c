#include <stdio.h>

int main() {
    int num[4];
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("First = %d\n", num[0]);
    printf("Last = %d", num[3]);
    return 0;
}