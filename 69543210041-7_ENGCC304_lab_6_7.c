#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}