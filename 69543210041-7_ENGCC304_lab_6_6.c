#include <stdio.h>
int main() {
    int choice;
    while (1) {
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Hello\n");
        } else if (choice == 2) {
            printf("Bye\n");
        } else if (choice == 0) {
            printf("Exit\n");
            break;
        } else {
            printf("Invalid\n");
        }
    }
    return 0;
}