#include <stdio.h>

int main() {
    int width, length, perimeter;
    scanf("%d", &width);
    scanf("%d", &length);
    perimeter = 2 * (width + length);
    printf("Perimeter = %d", perimeter);

    return 0;
}