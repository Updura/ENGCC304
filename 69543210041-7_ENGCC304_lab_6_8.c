#include <stdio.h>
int main() {
    int num;
    do {
        scanf("%d", &num);
    } while (num < 1 || num > 5);
    printf("Accepted = %d", num);
    return 0;
}