#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        sum = sum + i;
        i++;
         }
    printf("Sum = %d", sum);
    return 0;
}