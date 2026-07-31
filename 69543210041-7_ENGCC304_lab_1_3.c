#include <stdio.h>

int main() {
    char studentID[20];
    char nickname[50];
    char section[20];

    scanf("%s", studentID);
    scanf("%s", nickname);
    scanf("%s", section);

    printf("Student ID: %s\n", studentID);
    printf("Nickname: %s\n", nickname);
    printf("Section: %s\n", section);

    return 0;
}