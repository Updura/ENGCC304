#include <stdio.h>
int main() {
    int num;
    int sum = 0;
    int i;
    for (i = 1; i <= 5; i++) {
        scanf("%d", &num);
        sum = sum + num;}
    printf("Sum = %d", sum);
    return 0;
}