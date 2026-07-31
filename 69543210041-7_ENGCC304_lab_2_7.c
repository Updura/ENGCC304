#include <stdio.h>

int main() {
    int centimeter;
    int meter;
    int remain;
    scanf("%d", &centimeter);
    meter = centimeter / 100;
    remain = centimeter % 100;
    printf("Meter = %d\n", meter);
    printf("Centimeter = %d", remain);

    return 0;
}