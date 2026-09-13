#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int sum = 0;
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}