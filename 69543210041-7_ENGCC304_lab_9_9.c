#include <stdio.h>

int main() {
    int num[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    printf("First = %d\n", num[0]);
    printf("Last = %d", num[4]);
    return 0;
}