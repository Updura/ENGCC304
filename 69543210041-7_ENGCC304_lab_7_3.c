#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    if (day == 1) {
        printf("Monday");
    } else if (day == 2) {
        printf("Tuesday");
    } else if (day == 3) {
        printf("Wednesday");
    } else {
        printf("Invalid day");
    }
    return 0;
}