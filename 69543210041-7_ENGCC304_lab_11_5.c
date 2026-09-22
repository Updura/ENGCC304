#include <stdio.h>

int main() {
    char word[50];
    int i;
    int count = 0;
    scanf("%s", word);
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a') {
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}