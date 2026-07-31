#include <stdio.h>

int main() {
    char studentID[20];
    char name[50];
    int age;

    scanf("%s", studentID);
    scanf("%s", name);
    scanf("%d", &age);

    printf("Student ID: %s\n", studentID);
    printf("Name: %s\n", name);
    printf("Age: %d", age);

    return 0;
}