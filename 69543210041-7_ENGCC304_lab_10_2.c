#include <stdio.h>

int main() {
    int num[5];
    int target;
    int found = 0;
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &target);

    for (i = 0; i < 5; i++) {
        if (num[i] == target) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Found");
    } else {
        printf("Not Found");
    }
    return 0;
}