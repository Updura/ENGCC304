#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int length;
    scanf("%s", word);
    length = strlen(word);
    printf("First = %c\n", word[0]);
    printf("Last = %c", word[length - 1]);
    return 0;
}