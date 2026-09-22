#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int i, length;
    scanf("%s", word);
    length = strlen(word);
    for (i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    return 0;
}