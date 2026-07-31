#include <stdio.h>

int main() {
    char hardware[20];
    char software[20];

    scanf("%s", hardware);
    scanf("%s", software);

    printf("Hardware: %s\n", hardware);
    printf("Software: %s\n", software);
    printf("Both work together.");

    return 0;
}