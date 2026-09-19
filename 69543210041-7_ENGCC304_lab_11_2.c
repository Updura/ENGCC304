#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int length;
    scanf("%s", word);
    length = strlen(word);
    printf("Length = %d", length);
    return 0;
}